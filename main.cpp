#include "./classes/Blackjack.h"
using namespace std;

//hello.cpp

int main()
{
    Blackjack game;

    game.initialise();

    while( true )
    {
        game.getInput();
        game.update();
        game.draw();
        game.playSounds();

        if ( game.shouldExit() )
        {
            break;
        }
    }

    game.clean();

    return 0;
}