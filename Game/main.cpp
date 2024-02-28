/*
     _____         _____         |      _____
____/_____)) | ___/_____))___    |  ___/_____))___
    ((_____) |      _________))  |       __________))
    ((_____) |      __________)) |       ___________))
    ((____)  |     _________))   |      ((_____)
____((___)   | ___________))     |  ____((____)
*/

#include <iostream>
#include <cstdlib>
#include "main2.h"
#include "main2.cpp"

class RockPaperScissors{
    private:
        int player_pick, computer_pick, game_results;
        int player_score = 0, computer_score = 0;

        int eRock[10] = {3,2,1,3,1,3,2,3,1,3};
        int ePaper[10] = {3,2,1,2,1,3,1,1,2,1};
        int eScissors[10] = {1,1,2,3,2,3,3,2,2,2};

        int nRock[10] = {2,1,2,3,2,1,2,1,3,3};
        int nPaper[10] = {2,3,2,1,3,1,2,2,1,3};
        int nScissors[10] = {1,1,3,1,2,3,2,3,1,2};

        int hRock[10] = {2,2,1,1,2,3,2,1,1,2};
        int hPaper[10] = {3,3,2,2,3,3,1,2,2,3};
        int hScissors[10] = {3,1,1,3,2,3,1,3,3,1};
    
    public:
    
        void Display(){
            std::cout << "\n------- Rock Paper Scissors -------\n";
            std::cout << "\nOptions: \n";
            std::cout << "1    _____   |2    _____         |3     _____\n";
            std::cout << "____/_____)) | ___/_____))___    |  ___/_____))___\n";
            std::cout << "    ((_____) |      _________))  |       __________))\n";
            std::cout << "    ((_____) |      __________)) |       ___________))\n";
            std::cout << "    ((____)  |     _________))   |      ((_____)\n";
            std::cout << "____((___)   | ___________))     |  ____((____)\n\n";
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
            if(x == 1 && y == 3) game_results = 1;      //player wins - Rock
            else if(x == 1 && y == 2) game_results = 2; //computer wins - Rock
            else if(x == 1 && y == 1) game_results = 0; //draw - Rock
            else if(x == 2 && y == 1) game_results = 1; //player wins - Paper
            else if(x == 2 && y == 2) game_results = 0; //draw - Paper
            else if(x == 2 && y == 3) game_results = 2; //computer wins - Paper
            else if(x == 3 && y == 1) game_results = 2; //computer wins - Scissors
            else if(x == 3 && y == 2) game_results = 1; //player wins - Scissors
            else if(x == 3 && y == 3) game_results = 0; //draw scissors
            else game_results = 3; //invalid pick
            return game_results;
        }
        int return_Score(int x){
            if(x == 1) {
                player_score++;
                return player_score;
            }
            else if (x == 2){
                computer_score++;
                return computer_score;
            }
            return 0;
        }
        int playerScore(){
            return player_score;
        }
        int computerScore(){
            return computer_score;
        }
        void display_results(int x){
            std::cout << "\n\nMatch Result\n\n";
            if(x == 1) std::cout << "| Player wins |\n";
            else if(x == 2) std::cout << "| Computer wins |\n";
            else if (x == 0) std::cout << "| Draw |\n ";
            else std::cout << "| Invalid! |\n";
        }
        void display_score(){
            std::cout << "\nPlayer Score: " << player_score;
            std::cout << "\nComputer Score: " << computer_score;
        }
};

int main(){
    srand(time(0));

    RockPaperScissors RPS;
    main2 displayRPS;


    int ps = 0, cs = 0; 
    do{
        if(ps == 3 || cs == 3) {
            break;
        }
        int randomNumber = 1 + rand() % 10;
        int playerinput;

        RPS.Display();
        std::cout << "Your Pick: "; std::cin >> playerinput;
        std::system("cls");

        int a = RPS.takePlayerInput(playerinput);
        int b = RPS.computerPicks(randomNumber);
        int c = RPS.result(a, b);
        RPS.return_Score(c);
        ps = RPS.playerScore();
        cs = RPS.computerScore();

        RPS.display_results(c);
        RPS.display_score();
        displayRPS.displayResult(a, b);

    }while(ps != 3 || cs != 3);    
}