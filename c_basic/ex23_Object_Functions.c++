#include <iostream>


class Student{
    public:
        std::string name;
        std::string major;
        double gpa;
        Student(std::string aName,std::string aMajor, double aGpa ){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }

    

};


int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    std::cout<< student1.hasHonors()<<'\n';
    std::cout<< student2.hasHonors();

    return 0;
}

