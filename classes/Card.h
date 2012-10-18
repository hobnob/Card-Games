#ifndef CardGame_Card_h
    #define CardGame_Card_h

    struct Card
    {
        enum e_value {
            ACE = 1,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,
            NINE,TEN,JACK,QUEEN,KING
        };
        enum e_suit {CLUBS,HEARTS,SPADES,DIAMONDS};

        Card::e_value value;
        Card::e_suit suit;
    };
#endif