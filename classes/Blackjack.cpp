
#include "Blackjack.h"

#include <iostream>
#include <string>

Blackjack::Blackjack()
{
    this->_exit    = false;
}

void Blackjack::initialise(){}

void Blackjack::getInput()
{
    if ( !(this->_players.size()) )
    {
        int players;
        std::cout << "Please enter the number of players: ";
        std::cin >> players;

        if ( players )
        {
            this->_players.reserve( players );
            for ( int i = 0; i < players; i++ )
            {
                std::string name = "";

                std::cout << "Please Enter Player " << ( i + 1 ) << "'s Name: ";
                std::cin >> name;

                this->_players.push_back(new Player(name));
            }
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cout << "\nYou have not entered a valid number!\n";
        }
    }
    else
    {

    }
}

void Blackjack::update(){}
void Blackjack::draw(){}
void Blackjack::playSounds(){}
void Blackjack::clean(){}

bool Blackjack::shouldExit()
{
    return this->_exit;
}