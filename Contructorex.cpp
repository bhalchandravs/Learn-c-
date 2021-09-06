#include <iostream>
using namespace std;

 class Book {
     public :
     string title;
     string author;
     int pages;
    Book (string aTitle, string aAuthor, int aPages){
    title = aTitle;
    author = aAuthor;
    pages = aPages; 
    }
};

int main()
{
    Book book1("Mathematics", "Ramanujan",1000);
    Book book2("English","Peter",1500);
          
    cout << book1.title << endl ;
    cout << book2.author; 
    return 0;
}
