#pragma once

#include <StreamWrapper.hpp>
#include <Header.hpp>

#include <boost/endian/buffers.hpp>

struct Allocator
{
  boost::endian::big_int64_buf_at pos[100];
  boost::endian::big_int64_buf_at next;
};

class AllocatorStream : public StreamWrapper<Allocator>
{
public:
  AllocatorStream(HeaderStream* header) : StreamWrapper<Allocator>(nullptr), m_next(nullptr) {}
  virtual ~AllocatorStream()
  {
    if(m_next != nullptr)
    {
      delete m_next;
    }
  }
  void alloc(void)
  {
    if(pos() == 0L)
    {
      m_stream->seekg(0, std::ios::end);
    }
    else
    {
      
    }
  }
  void erase(long)
  {
  }
private:
  AllocatorStream* m_next;
  AllocatorStream* next(void) const
  {
    if(m_next != nullptr)
    {
      return m_next;
    }
    if(m_data.next.value() == 0)
    {
      
    }
    return nullptr;
  }
};