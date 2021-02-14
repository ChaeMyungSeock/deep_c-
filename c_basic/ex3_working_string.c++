#include<iostream>

int main()
{
    std::string phrasesub;
    std::string phrase = "Giraffe Academy";
    //                    012345678
    std::cout <<  phrase.length()<<"\n";
    std::cout <<  phrase[0]<<'\n';
    phrase[0] = 'B';
    std::cout <<  phrase <<'\n';

    std::cout<< phrase.find("Academy",0)<<'\n'; // 8 Academy가 시작하는 위치 인덱스

    std::cout<< phrase.substr()<<'\n'; //Biraffe Academy
    std::cout<< phrase.substr(8,3)<<'\n'; // 8번 인덱스부터 3개
    phrasesub = phrase.substr(8,3);
    std::cout<< phrasesub;
    
    return 0;
}