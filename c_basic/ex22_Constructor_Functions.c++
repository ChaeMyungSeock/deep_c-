#include <iostream>


class Book{
    public:
        std::string title;
        std::string author;
        int pages;
        // Book(std::string name){
        //     // std::cout<< "Creating Object" << "\n";
        //     std::cout<<name<<"\n";
        // }
         Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        
        }

        Book(std::string aTitle, std::string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        
        }

};


int main()
{
   

    Book book1("Harry Potter","JK Rowling", 500);


    Book book2("Lord of the Rings","Tolkein",700);

    Book book3;


    // Book book1("Harry Potter");
    // book1.title = "Harry Potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;

    // Book book2("Lord of the Rings");
    // book2.title = "Lord of the Rings";
    // book2.author = "Tolkein";
    // book2.pages = 700;
    // book2.title = "Hunger Games";

    std::cout<< book1.title<<"\n"; // Harry Potter
    std::cout<< book3.title; // no title



    return 0;
}

