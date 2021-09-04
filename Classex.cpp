#include <iostream>
using namespace std;

class Book {
    public :
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1;
        book1.title = "Mathematics";
        book1.author = "Ramanujan";
        book1.pages = 1000 ;
    Book book2;
         book2.title = "English";
         book2.author = "Peter";
         book2.pages = 1500 ;
    
    cout << book1.title << endl ;
    cout << book2.author; 
    return 0;
}