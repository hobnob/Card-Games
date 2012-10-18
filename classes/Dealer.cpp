
#include "Dealer.h"

Dealer::Dealer( std::string name ) : Player(name)
{
    this->deck.shuffle();
}

void Dealer::deal( Hand* hand )
{
    hand->cards.push_back(this->deck.pop());
}