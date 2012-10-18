#ifndef CardGame_Blackjack_h
    #define CardGame_Blackjack_h

    #include <vector>
    #include <string>
    #include "Card.h"
    #include "Dealer.h"
    #include "Player.h"

    class Blackjack
    {
        private:
            enum e_stages {INIT, DEAL, BET, PLAY, PAYOUT, END};

            e_stages _gameStage;
            bool _exit;
            int _currentPlayer;
            Dealer _dealer;
            std::vector<Player*> _players;

            void _outputDealerCard( int cardIndex );
            std::string _outputCardValue( Card c );
            std::string _outputCardSuit( Card c );


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