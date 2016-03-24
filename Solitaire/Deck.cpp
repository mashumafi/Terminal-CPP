#include "Deck.h"

Deck::Deck() {
    for (int suit = 0; suit < Diamonds; suit++)
    {
        for (int rank = 0; rank < King; rank++)
        {
            push_back(new Card(rank, suit));
        }
    }
}

Deck::~Deck()
{
    for (int i = 0; i < this->size(); i++)
    {
        delete this->at(i);
    }
}
