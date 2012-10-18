#ifndef CardGame_Blackjack_h
    #define CardGame_Blackjack_h

    #include <vector>
    #include "Dealer.h"
    #include "Player.h"

    class Blackjack
    {
        private:
            bool _exit;
            Dealer _dealer;
            std::vector<Player*> _players;
        public:
            Blackjack();
            void initialise();
            void getInput();
            void update();
            void draw();
            void playSounds();
            void clean();

            bool shouldExit();
    };
#endif