#include <iostream>
#include <cmath>

int main()
{
    std::string color, pluralNoun, celebrity;

    std::cout << "enter a color : ";
    std::getline(std::cin, color);
    std::cout << "enter a plural noun : ";
    std::getline(std::cin, pluralNoun);
    std::cout << "enter a celebrity : ";
    std::getline(std::cin, celebrity);

    std::cout << "Roses are " << color << std::endl;
    std::cout << pluralNoun << " are blue" << std::endl;
    std::cout << "i love  " << celebrity << std::endl;

    return 0;
}