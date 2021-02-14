#include <iostream>

void sayHi(std::string name, int age);

int main()
{
    
    sayHi("Mike", 60);
    sayHi("Tom", 45);
    sayHi("Steve", 19);

    return 0;
}

void sayHi(std::string name, int age){
      std::cout<<"Hello "<< name << " you are "<< age <<  std::endl;
}