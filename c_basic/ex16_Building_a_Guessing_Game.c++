#include <iostream>

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
   
   
    while (secretNum != guess && !outOfGuesses)
    {
        if(guessCount < guessLimit)
        {
            std::cout<< "Enter guess : ";
            std::cin>> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses){
        std::cout << "You Lose!";
    } else {
        std::cout<< "You Win!";

    }
    

    


    return 0;
}

