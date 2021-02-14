#include <iostream>



int main()
{
    int age = 19;
    int *pAge = &age;

    double gpa = 2.7;
    double *pGpa = &gpa;

    std::string name = "Mike";
    std::string *pName = &name;

    // std::cout <<"Age : "<< &age<<std::endl;
    // std::cout <<"Gpa : "<< &gpa<<std::endl;
    // std::cout <<"Name : "<< &name<<std::endl;

    std::cout<<pAge<<std::endl; // 0x61fdf0
    std::cout<< &*&pGpa; // 0x61fde8
    
    return 0;
}

