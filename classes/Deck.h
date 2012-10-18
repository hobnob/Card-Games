#ifndef CardGame_Deck_h
    #define CardGame_Deck_h

    #include <vector>
    #include "Card.h"

    class Deck
    {
        private:
            std::vector<Card> pack;

        public:
            Deck();
            void shuffle();
            Card peek();
            Card pop();
            void push(Card c);
            int size();
    };
#endif