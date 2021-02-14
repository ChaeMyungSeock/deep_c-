#include <iostream>



int main()
{
    int num1, num2;
    char op;

    std::cout << "Enter first number : ";
    std::cin >> num1;
    std::cout << "Enter operator : ";
    std::cin >> op;
    std::cout << "Enter second number : ";
    std::cin >> num2;
    int result;

    if (op == '+'){
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '/'){
        result = num1 / num2;
    }else if(op == '*'){
        result = num1 * num2;
    }else{
        std::cout << "Invalid operator";
    }
    std::cout <<result;



    return 0;
}

