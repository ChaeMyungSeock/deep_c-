#include <iostream>


class Movie{
    private:
        std::string rating;

    public:
        std::string title;
        std::string director;

        Movie(std::string aTitle,std::string aDirector, std::string aRating ){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        void setRating(std::string aRating){
            // rating = aRating;
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "NR"){
                rating = aRating;

            }  else {
                rating = "NR";
            }
        }
        std::string getRating(){
            return rating;
        }

    

};


int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("Dogs");
    std::cout<< avengers.getRating();
    // private의 경우 클래스 안에서만 접근할 수 있기 때문에 클래스 안에서 public으로 함수를 만들어서 접근할 수
    // 있게 하고 거기서 다시 public함수로 그 값을 리턴해서 확인한다.
    return 0;
}

