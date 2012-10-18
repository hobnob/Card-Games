#include "Deck.h"
#include <algorithm>
#include <ctime>
#include <cstdlib>

Deck::Deck()
{
    this->pack.reserve(52);

    for (int suit = Card::CLUBS; suit <= Card::DIAMONDS; suit++ )
    {
        for ( int val = Card::ACE; val <= Card::KING; val++)
        {
            Card c;
            c.value = (Card::e_value) val;
            c.suit  = (Card::e_suit) suit;

            this->push(c);
        }
    }
}

void Deck::shuffle()
{
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    //Use the inbuilt random_shuffle funtion from 'algorithm'
    random_shuffle(this->pack.begin(), this->pack.end());
}

Card Deck::peek()
{
    return this->pack.back();
}

Card Deck::pop()
{
    Card c = this->peek();
    this->pack.pop_back();
    return c;
}

void Deck::push(Card c)
{
    this->pack.push_back(c);
}

int Deck::size()
{
    return this->pack.size();
}