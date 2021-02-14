#include <iostream>


int main()
{
    bool isMale = true;
    bool isTall = true;

    // if(isMale && isTall){
    //     std::cout<< "You are a tall male";

    // } else {
    //     std::cout<< "You are not male";

    // }
    if(isMale || isTall){
        std::cout<< "You are a tall male";

    } else if(isMale && !isTall){
        std::cout<< "You are a short male";

    }
    else if(!isMale && isTall){
        std::cout<< "You are tall but not male";

    }
    
    else{
        std::cout<< "You are not male and not tall";

    }

    return 0;
}

