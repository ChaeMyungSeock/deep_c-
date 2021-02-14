#include <iostream>


class Chef{
    public:
        void makeChicken(){
            std::cout << "The chef makes chicken" <<std::endl;
        }
    
        void makeSalad(){
            std::cout << "The chef makes salad" <<std::endl;
        }
        
        void makeSpecialDish(){
            std::cout << "The chef makes bbq ribs" <<std::endl;
        }

};

class ItalianChef : public Chef{  // ItalianChef 클래스에 public 부분을 불러옴
// 불러온 public 클래스 부분을 함수를 그대로 사용할 수 있지만 여기서 새로 선언하게 되면
// 이 클래스 내부에서 선언한것에 귀속 됨
    public:
        void makePasta(){
            std::cout << "The chef makes pasta" << std::endl;
        }
        void makeSpecialDish(){
            std::cout << "The chef makes chicken parm" <<std::endl;
        }

};

int main()
{
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();

    return 0;
}

