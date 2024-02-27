#include "main2.h"
#include<iostream>

main2::main2(){
}
void main2::displayResult(int x, int y) {
    if(x == 1 && y == 3) RockvsScissors();
    else if(x == 1 && y == 2) RockvsPaper();
    else if(x == 1 && y == 1) RockvsRock();
    else if(x == 2 && y == 1) PapervsRock();
    else if(x == 2 && y == 2) PapervsPaper(); 
    else if(x == 2 && y == 3) PapervsScissors();
    else if(x == 3 && y == 1) ScissorsvsRock();
    else if(x == 3 && y == 2) ScissorsvsPaper();
    else if(x == 3 && y == 3) ScissorsvsScissors(); 
}
void main2::RockvsRock(){
    std::cout << "\n";
    std::cout << "player Picks|ComputerPicks\n";
    std::cout << "    _____   |     _____   |\n";
    std::cout << "___/_____)) | ___/_____)) |\n";
    std::cout << "   ((_____) |    ((_____) |\n";
    std::cout << "   ((_____) |    ((_____) |\n";
    std::cout << "   ((____)  |    ((____)  |\n";
    std::cout << "___((___)   | ___((___)   |\n";
}
void main2::RockvsPaper(){
    std::cout << "\n";
    std::cout << "player Picks|ComputerPicks\n";
    std::cout << "    _____   |     _____        |\n";
    std::cout << "___/_____)) | ___/_____))___   |\n";
    std::cout << "   ((_____) |      _________)  |\n";
    std::cout << "   ((_____) |      __________) |\n";
    std::cout << "   ((____)  |      _________)  |\n";
    std::cout << "___((___)   | __________)      |\n";
}
void main2::RockvsScissors(){
    std::cout << "\n";
    std::cout << "player Picks|ComputerPicks\n";
    std::cout << "    _____   |     _____        |\n";
    std::cout << "___/_____)) | ___/_____))___   |\n";
    std::cout << "   ((_____) |      _________)  |\n";
    std::cout << "   ((_____) |      __________) |\n";
    std::cout << "   ((____)  |      ((____)     |\n";
    std::cout << "___((___)   | ____((____)      |\n";
}

void main2::PapervsPaper(){
    std::cout << "\n";
    std::cout << "player Picks     |ComputerPicks\n";
    std::cout << "    _____        |     _____        |\n";
    std::cout << "___/_____))___   | ___/_____))___   |\n";
    std::cout << "     _________)  |      _________)  |\n";
    std::cout << "     __________) |      __________) |\n";
    std::cout << "     _________)  |      _________)  |\n";
    std::cout << "__________)      | __________)      |\n";
}
void main2::PapervsRock(){
    std::cout << "\n";
    std::cout << "player Picks     |ComputerPicks\n";
    std::cout << "    _____        |     _____   \n";
    std::cout << "___/_____))___   | ___/_____)) |\n";
    std::cout << "     _________)  |    ((_____) |\n";
    std::cout << "     __________) |    ((_____) |\n";
    std::cout << "     _________)  |    ((____)  |\n";
    std::cout << "__________)      | ___((___)   |\n";
}
void main2::PapervsScissors(){
    std::cout << "\n";
    std::cout << "player Picks     |ComputerPicks\n";
    std::cout << "    _____        |     _____        |\n";
    std::cout << "___/_____))___   | ___/_____))___   |\n";
    std::cout << "     _________)  |      _________)  |\n";
    std::cout << "     __________) |      __________) |\n";
    std::cout << "     _________)  |      ((____)     |\n";
    std::cout << "__________)      | ____((____)      |\n";
}

void main2::ScissorsvsScissors(){
    std::cout << "\n";
    std::cout << "player Picks     |ComputerPicks\n";
    std::cout << "    _____        |     _____        |\n";
    std::cout << "___/_____))___   | ___/_____))___   |\n";
    std::cout << "     _________)  |      _________)  |\n";
    std::cout << "     __________) |      __________) |\n";
    std::cout << "     ((____)     |      ((____)     |\n";
    std::cout << "____((____)      | ____((____)      |\n";
}
void main2::ScissorsvsRock(){
    std::cout << "\n";
    std::cout << "player Picks     |ComputerPicks\n";
    std::cout << "    _____        |     _____   |\n";
    std::cout << "___/_____))___   | ___/_____)) |\n";
    std::cout << "     _________)  |    ((_____) |\n";
    std::cout << "     __________) |    ((_____) |\n";
    std::cout << "     ((____)     |    ((____)  |\n";
    std::cout << "____((____)      | ___((___)   |\n";
}
void main2::ScissorsvsPaper(){
    std::cout << "\n";
    std::cout << "player Picks     |ComputerPicks\n";
    std::cout << "    _____        |     _____        |\n";
    std::cout << "___/_____))___   | ___/_____))___   |\n";
    std::cout << "     _________)  |      _________)  |\n";
    std::cout << "     __________) |      __________) |\n";
    std::cout << "     ((____)     |      _________)  |\n";
    std::cout << "____((____)      | __________)      |\n";
}

main2::~main2()
{
}