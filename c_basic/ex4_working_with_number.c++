#include <iostream>
#include <cmath>

int main()
{
    int wnum =5;
    double dnum = 5.5;

    std::cout<<-40.0983<<"\n";
    std::cout<<5 * 7<<'\n';
    std::cout<<10 % 3<<'\n';
    std::cout<<10 / 3<<'\n';
    std::cout<<10 / 3.0<<'\n';
    std::cout<<10.0 / 3.0<<'\n';

    std::cout<<pow(2, 5)<<'\n'; //32
    std::cout<<round(4.6)<<'\n'; //5 반올림

    std::cout<<ceil(4.1)<<'\n'; //5
    std::cout<<floor(4.6)<<'\n'; // 소수점 버림
    std::cout<<fmax(3,10)<<'\n'; // 최대값
    std::cout<<fmin(3,10)<<'\n'; // 최소값



    return 0;

}