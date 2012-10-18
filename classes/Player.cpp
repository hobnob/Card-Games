
#include "Player.h"

Player::Player(std::string name)
{
    this->name = name;
}

Hand* Player::getHands()
{
    return this->hands;
}