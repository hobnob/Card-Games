#ifndef CardGame_Player_h
    #define CardGame_Player_h

    #include "Hand.h"
    #include <string>

    class Player
    {
        protected:
            Hand hands[1];

        public:
            std::string name;

            Player( std::string name);
            Hand* getHands();
    };
#endif