#include <iostream>

class RockPaperScissors{
    public:
        void Display(){
            std::cout << "Rock Paper Scissors" << std::endl;
        }
        int takePlayerInput(int x){
            player_pick = x;
            return player_pick;
        }
        int computerPicks(int x){
            computer_pick = eRock[x-1];
            return computer_pick;
        }
        int result(int x, int y){
            if(x == 1 && y == 3){
                game_results = 1;
            }
            else{
                game_results = 2;
            }
            return game_results;
        }
        void display_results(int x){
            if(x == 1) {
                std::cout << "Player wins\n";
                std::cout << "player picks: " << player_pick << std::endl;
                std::cout << "computer picks: " << computer_pick << std::endl;
            }
            else{
                std::cout << "Game Results 2 " << std::endl;
                std::cout << "Player Picks: " << player_pick << std::endl;
                std::cout << "Computer Picks: " << computer_pick << std::endl;
            }
        }
    private:
        int eRock[10] = {3,2,1,3,1,3,2,3,1,3};
        int ePaper[10] = {1,1,1,1,1};
        int eScissors[10] = {2,2,2,2,2};

        int nRock[10] = {3,3,3};
        int nPaper[10] = {1,1,1};
        int nScissors[10] = {2,2,2};

        int hRock[10] = {3};
        int hPaper[10] = {1};
        int hScissors[10] = {2};

        int player_pick = 0;
        int computer_pick = 0;
        int game_results;

};
int main(){
    int playerinput;
    RockPaperScissors RPS;

    srand(time(0));
    int randomNumber = 1 + rand() % 10;
    RPS.Display();
    std::cout << "Player Picks: ";
    std::cin >> playerinput;

    int a = RPS.takePlayerInput(playerinput);
    int b = RPS.computerPicks(randomNumber);
    int c = RPS.result(a, b);
    
    RPS.display_results(c);
}