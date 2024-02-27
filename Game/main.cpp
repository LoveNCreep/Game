#include <iostream>

class RockPaperScissors{
    public:
    private:
        /*
        Determines the chances of computer picking a losing number.
        
        Assume player inputs 1 which represents "Rock";
        In easy difficulty 5 out 10 chances that the computer will pick scissors.
        While in normal difficulty there are 3 in 10 chances that computer  will lose.
        As for hard difficulty the computer has 1 in 10 chance.    
        
        */

        //Easy Difficulty
        int eRock[10] = {3,3,3,3,3};
        int ePaper[10] = {1,1,1,1,1};
        int eScissors[10] = {2,2,2,2,2};

        //Normal Difficulty
        int nRock[10] = {3,3,3};
        int nPaper[10] = {1,1,1};
        int nScissors[10] = {2,2,2};

        //Hard Difficulty
        int hock[10] = {3};
        int hPaper[10] = {1};
        int hScissors[10] = {2};

};
int main(){

}