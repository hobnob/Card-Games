#include <iostream>
#include "./classes/Deck.h"
#include "./classes/Dealer.h"
#include "./classes/Player.h"
using namespace std;

//hello.cpp

int main()
{
    Dealer d;

    string playerName;
    cout << "Enter a player name: ";
    cin >> playerName;

    Player p = Player(playerName);
    d.deal(&p.getHands()[0]);
    d.deal(&p.getHands()[0]);
    d.deal(&p.getHands()[0]);
    d.deal(&p.getHands()[0]);

    cout << "\n" << playerName << " has the following cards in their hand:";
    cout << "\n";

    for ( int i = 0; i < p.getHands()[0].cards.size(); i++ )
    {
        cout << " * ";
        Card c = p.getHands()[0].cards[i];

        switch (c.value)
        {
            case 1:
                cout << "Ace";
                break;
            case 2:
                cout << "Two";
                break;
            case 3:
                cout << "Three";
                break;
            case 4:
                cout << "Four";
                break;
            case 5:
                cout << "Five";
                break;
            case 6:
                cout << "Six";
                break;
            case 7:
                cout << "Seven";
                break;
            case 8:
                cout << "Eight";
                break;
            case 9:
                cout << "Nine";
                break;
            case 10:
                cout << "Ten";
                break;
            case 11:
                cout << "Jack";
                break;
            case 12:
                cout << "Queen";
                break;
            case 13:
                cout << "King";
                break;
        }

        cout << " of ";
        switch (c.suit)
        {
            case 0:
                cout << "Clubs";
                break;
            case 1:
                cout << "Hearts";
                break;
            case 2:
                cout << "Spades";
                break;
            case 3:
                cout << "Diamonds";
        }
        
        cout << "\n";
    }

    cout << "\n";

    return 0;
}