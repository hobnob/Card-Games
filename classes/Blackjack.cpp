
#include "Blackjack.h"
#include "Hand.h"

#include <iostream>

Blackjack::Blackjack()
{
    this->_exit    = false;
    this->_currentPlayer = 0;
}

void Blackjack::initialise()
{
    this->_gameStage = Blackjack::INIT;
}

void Blackjack::getInput()
{
    switch ( this->_gameStage )
    {
        case Blackjack::INIT:
            int players;
            std::cout << "Please enter the number of players: ";
            std::cin >> players;

            if ( players )
            {
                this->_players.reserve( players );
                for ( int i = 0; i < players; i++ )
                {
                    std::string name = "";

                    std::cout << "Please Enter Player ";
                    std::cout << ( i + 1 ) << "'s Name: ";
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

            break;
    }
}

void Blackjack::update()
{
    switch ( this->_gameStage )
    {
        case Blackjack::INIT:
            if ( this->_players.size() )
            {
                this->_gameStage = Blackjack::DEAL;
            }

            break;

        case Blackjack::DEAL:
            for ( int i = 0; i < 2; i++ )
            {
                for ( int p = 0; p < this->_players.size(); p++ )
                {
                    this->_dealer.deal( &this->_players[p]->getHands()[0] );
                }

                this->_dealer.deal( &this->_dealer.getHands()[0] );
            }

            this->_outputDealerCard(0);
            this->_gameStage = Blackjack::BET;
            break;
    }
}

void Blackjack::_outputDealerCard( int cardIndex )
{
    Hand* dealerHand = &this->_dealer.getHands()[0];
    if ( cardIndex < dealerHand->cards.size() )
    {
        Card c = dealerHand->cards[cardIndex];

        std::cout << "\nThe dealer's card is " << this->_outputCardValue(c);
        std::cout << " of " << this->_outputCardSuit(c) << "\n";

    }
}

std::string Blackjack::_outputCardValue( Card c )
{
    std::string val = "";

    switch ( c.value )
    {
        case Card::ACE:
            val = "Ace";
            break;

        case Card::TWO:
            val = "Two";
            break;

        case Card::THREE:
            val = "Three";
            break;

        case Card::FOUR:
            val = "Four";
            break;

        case Card::FIVE:
            val = "Five";
            break;

        case Card::SIX:
            val = "Six";
            break;

        case Card::SEVEN:
            val = "Seven";
            break;

        case Card::EIGHT:
            val = "Eight";
            break;

        case Card::NINE:
            val = "Nine";
            break;

        case Card::TEN:
            val = "Ten";
            break;

        case Card::JACK:
            val = "Jack";
            break;

        case Card::QUEEN:
            val = "Queen";
            break;

        case Card::KING:
            val = "King";
            break;
    }

    return val;
}

std::string Blackjack::_outputCardSuit( Card c )
{
    std::string val = "";

    switch ( c.suit )
    {
        case Card::CLUBS:
            val = "Clubs";
            break;

        case Card::SPADES:
            val = "Spades";
            break;

        case Card::HEARTS:
            val = "Hearts";
            break;

        case Card::DIAMONDS:
            val = "Diamonds";
            break;
    }

    return val;
}


void Blackjack::draw(){}
void Blackjack::playSounds(){}
void Blackjack::clean(){}

bool Blackjack::shouldExit()
{
    return this->_exit;
}