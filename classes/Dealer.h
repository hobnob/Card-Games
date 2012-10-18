#ifndef CardGame_Dealer_h
    #define CardGame_Dealer_h

    #include "Player.h"
    #include "Hand.h"
    #include "Deck.h"

    #include <string>

    class Dealer : public Player
    {
        private:
            Deck deck;

        public:
            Dealer( std::string name = "Dealer" );
            void deal( Hand* hand );
    };
#endif