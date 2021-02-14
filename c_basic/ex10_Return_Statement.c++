#include <iostream>

// void가 아닌 필요한 int char double 등으로 함수를 만들 수 있음 string이나

double cube(double num){
    double result = num * num * num;

    return result; 
    std::cout<< "Hello";
}

int main()
{
    
    double answer = cube(5.0);
    // std::cout<< answer;
    std::cout<< cube(5.0);

    return 0;
}

