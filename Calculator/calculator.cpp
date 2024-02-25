
#include <iostream>

class Calculator{
    public:
        int Add(int x, int y){
            return x + y;
        }
        int Sub(int x, int y){
            return x - y;
        }
        int Mul(int x, int y){
            return x * y;
        }
        int Div(int x, int  y){
            return x / y;
        }
};

int main(){
    Calculator C;
    
    int x, y;
    char z;

    std::cout << "Calculator" << std::endl;
    std::cout << "Operation: + - * / " << std::endl;
    std::cout << "First Number: "; std::cin >> x;
    std::cout << "Second Number: "; std::cin >> y;
    std::cout << "Operator (+ - * /): "; std::cin >> z;
    
    switch(z){
        case '+':
            std::cout << C.Add(x, y);
            break;
        case '-':
            std::cout << C.Sub(x, y);
            break;
        case '*':
            std::cout << C.Mul(x, y);
            break;
        case '/':
            std::cout << C.Div(x, y);
            break;
        default:
            std::cout << "\nInvalid Operator\n";
    }
}