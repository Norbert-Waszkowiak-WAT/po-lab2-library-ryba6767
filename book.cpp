#ifndef BOOK
#define BOOK
#include<iostream>
#include <string>
using namespace std;
class Book{
    private:
    string title;
    string author;
    string isbn;

    public:
    Book(): title(""), author(""),isbn(""){}
    Book(string title,string author,string isbn): title(title), author(author),isbn(isbn){}
~Book(){
    cout<<"Destroying book: "<<title<<endl;

}
string getTitle(){
    return title;
}
string getAuthor(){
    return author;
}
string getIsbn(){
    return isbn;
}

};
#endif
