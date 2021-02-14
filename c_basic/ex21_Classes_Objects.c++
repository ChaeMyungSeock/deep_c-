#include <iostream>


class Book{
    public:
        std::string title;
        std::string author;
        int pages;

};


int main()
{

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;
    book2.title = "Hunger Games";


    // std::cout << book1.title;
    std::cout << book2.title;

    return 0;
}

