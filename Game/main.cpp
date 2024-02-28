/*
     _____         _____         |      _____
____/_____)) | ___/_____))___    |  ___/_____))___
    ((_____) |      _________))  |       __________))
    ((_____) |      __________)) |       ___________))
    ((____)  |     _________))   |      ((_____)
____((___)   | ___________))     |  ____((____)
!Documentation
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

#include "main2.h"
#include "main2.cpp"

    /*
    Player will choose one from the three difficulty (Easy, Normal and hard).
    The first letter on every array represents it's difficult, and the numbers (elements)
    were the chances of player winning against computer.

    In Easy difficulty, there are 5 in a 10 chances the computer will pick a losing number depends on player input.
    If player chooses 1 which represents rock then the computer has 5 in 10 chances that it will pick scissors.
    On the other hand, normal difficulty has 3 in a 10 chances, while hard has only 1 in a 10. 
    */

class RockPaperScissors{
    private:
        
        //Easy difficulty
        int eRock[10] = {3,2,1,3,1,3,2,3,1,3};
        int ePaper[10] = {3,2,1,2,1,3,1,1,2,1};
        int eScissors[10] = {1,1,2,3,2,3,3,2,2,2};

        //Normal difficulty
        int nRock[10] = {2,1,2,3,2,1,2,1,3,3};
        int nPaper[10] = {2,3,2,1,3,1,2,2,1,3};
        int nScissors[10] = {1,1,3,1,2,3,2,3,1,2};

        //Hard difficulty
        int hRock[10] = {2,2,1,1,2,3,2,1,1,2};
        int hPaper[10] = {3,3,2,2,3,3,1,2,2,3};
        int hScissors[10] = {3,1,1,3,2,3,1,3,3,1};
        
        /*
        "Player_pick" variable will store the player input. The same rule applies to the "computer variable".
        While "game_results" variable will take the number of whoever side wins.
        Number 1 represents the player and number 2 represents the computer;
        */

        int player_pick, computer_pick, game_results;

        //The variables player_score and computer_score has default value of 0 but its being updated
        //depends on whoever takes the win per round.

        int player_score = 0, computer_score = 0;
    
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
            /*
            The variable x of function takePlayerInput will accept the argument (user input) as parameter, and
            sets player (input) to variable player_pick and return it.
            Sample:
                Player inputs 3
                    Now the variable player_pick holds the number "3".
            */
        int takePlayerInput(){
            std::cout << "Your Pick: ";
            if(!(std::cin >> player_pick)){
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << "\nInvalid Input!\n";
                takePlayerInput();
            }
            return player_pick;
        }
        
            /*
                These function will take the player input and compared it to numbers 1 - 3.
                If the player inputs 1 which represents rock, the computer  will choose random number from array
                named eRock and store it into the variable computer pick. Which be later on compared to player input. 
                The comparison varies on chosen difficulty.
            */
        
        int computerPicksE(int x, int y){
            if(y == 1) computer_pick = eRock[x-1];
            else if(y == 2) computer_pick = ePaper[x-1];
            else if (y == 3) computer_pick = eScissors[x-1];
            return computer_pick;
        }
        int computerPicksN(int x, int y){
            if(y == 1) computer_pick = nRock[x-1];
            else if(y == 2) computer_pick = nPaper[x-1];
            else if (y == 3) computer_pick = nScissors[x-1];
            return computer_pick;
        }
        int computerPicksH(int x, int y){
            if(y == 1) computer_pick = hRock[x-1];
            else if(y == 2) computer_pick = hPaper[x-1];
            else if (y == 3) computer_pick = hScissors[x-1];
            return computer_pick;
        }
        
            /*
            The player input and computer pick will be compared here and the winner will be decided on set of rules.
            1 Rock > 3 Scissors
            2 Paper > 1 Rock
            3 Scissors > 2 paper

            If the player won, then the variale game_results will store 1 and return it.
            If theres no winner, the variable game_results will return '0' for draw.
            */

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
    char difficulty_input;

    RPS.Display();
    std::cout << "\nChoose difficulty";
    std::cout << "\nInput \"E\" or \"e\" for Easy";
    std::cout << "\nInput \"N\" or \"n\"for Normal";
    std::cout << "\nInput \"H\" or \"h\"for Hard";
    std::cout << "\nYour Pick: "; std::cin >> difficulty_input;
    std::system("cls");

    switch(difficulty_input){
        case 'E':
        case 'e':
            do{
                if(ps == 3 || cs == 3) {
                    break;
                }
                int randomNumber = 1 + rand() % 10;
                int playerinput;

                RPS.Display();
                int a = RPS.takePlayerInput();
                std::system("cls");

                int b = RPS.computerPicksE(randomNumber, a);
                int c = RPS.result(a, b);
                RPS.return_Score(c);
                ps = RPS.playerScore();
                cs = RPS.computerScore();

                RPS.display_results(c);
                RPS.display_score();
                displayRPS.displayResult(a, b);

                }while(ps != 3 || cs != 3);    
            break;

        case 'N':
        case 'n':
            do{
                if(ps == 3 || cs == 3) {
                    break;
                }
                int randomNumber = 1 + rand() % 10;
                int playerinput;

                RPS.Display();
                int a = RPS.takePlayerInput();

                std::system("cls");

                int b = RPS.computerPicksN(randomNumber, a);
                int c = RPS.result(a, b);
                RPS.return_Score(c);
                ps = RPS.playerScore();
                cs = RPS.computerScore();

                RPS.display_results(c);
                RPS.display_score();
                displayRPS.displayResult(a, b);

                }while(ps != 3 || cs != 3); 
            break;

        case 'H':
        case 'h':
            do{
                if(ps == 3 || cs == 3) {
                    break;
                }
                int randomNumber = 1 + rand() % 10;
                int playerinput;

                RPS.Display();
                int a = RPS.takePlayerInput();
                std::system("cls");

                int b = RPS.computerPicksH(randomNumber, a);
                int c = RPS.result(a, b);
                RPS.return_Score(c);
                ps = RPS.playerScore();
                cs = RPS.computerScore();

                RPS.display_results(c);
                RPS.display_score();
                displayRPS.displayResult(a, b);

                }while(ps != 3 || cs != 3); 
            break;

        default:
            std::cout <<"\nInvalid Input!";
    }
    
}