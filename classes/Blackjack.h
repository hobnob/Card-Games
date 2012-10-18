#ifndef CardGame_Player_h
    #define CardGame_Player_h

    class Blackjack
    {
        private:
            bool _exit;
            int _players;
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