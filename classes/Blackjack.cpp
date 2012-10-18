
#include "Blackjack.h"

#include <iostream>

Blackjack::Blackjack()
{
    this->_exit    = false;
    this->_players = 0;
}

void Blackjack::initialise(){}

void Blackjack::getInput()
{
    if ( !this->_players )
    {
        std::cout << "Please enter the number of players:";
        std::cin >> this->_players;

        if ( !this->_players )
        {
            std::cout << "\nYou have not entered a valid number!\n";
            this->_players = 0;
        }
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