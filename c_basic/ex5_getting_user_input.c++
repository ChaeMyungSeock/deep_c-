#include<iostream>


int main()
{
//    int age;
//    std::cout<< "Enter your age: ";
//    std::cin >> age;

//    std::cout<<"you are "<< age<<" years old";   
//    char name;
//    std::cout<< "Enter your name: ";
//    std::cin >> name;

//    std::cout<<"your name is"<< name;

   std::string name;
   std::cout<< "Enter your name: ";
//    std::cin >> name;
   getline(std::cin, name);

   std::cout<<"Hello "<< name;

    return 0;
}