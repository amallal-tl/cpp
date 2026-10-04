#include <iostream>

int factorial(int var){
    if(var == 0){
        return 1;
    }

    return var * factorial(var - 1);
}

int main()
{
    int input = 4;

    int fact = factorial(input);

    std::cout << "Factorial = " << fact << std::endl;

    return 0;
}