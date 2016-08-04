#include <Solitaire.hpp>

#include <limits>

using namespace std;

int main(int argc, char *argv[])
{
  Game* game;
  
  int i = 0;
  do {
    cout << "Pick a game:" << endl
         << "1. Solitaire" << endl
         << "*. Quit" << endl;
    cin >> i;
    cin.clear();
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); 
    switch(i)
    {
      case 1:
        game = new Solitaire;
        break;
      default:
        i = 0;
        break;
    }
    if(game != nullptr)
    {
      game->main(argc, argv);
      delete game;
    }
  } while (i != 0);
  
  return 0;
}
