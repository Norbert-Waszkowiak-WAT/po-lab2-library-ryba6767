#ifndef LIBRARY
#define LIBRARY
#include<iostream>
#include "book.cpp"
using namespace std;
class Library{
    private:
    Book** books;
    int count;
    public:
    Library():count (0),books(nullptr){}
    void addBook(Book* book){
            count++;
            Book**newBook= new Book*[count];
            newBook[count-1]=book;
            for(int i =0;i<count-1;i++){
                newBook[i]=books[i];
            }
            delete[] books;
            books=newBook;
    }

    void removeBook(int index){
        if(index>= count ||index<0){
            cout<<"Invalid index"<< endl;
            return;
        }
        delete books[index];
        for(int i=index;i<count-1;i++){
                books[i]=books [i+1];
        }
        count--;

    }
    Book** getBooks(){
        return books;
    }
    int getCount(){
        return count;
    }
    ~Library (){
        for(int i=0;i<count;i++){
          delete books[i];
        }
        delete[] books;
            cout<<"Library destroyed"<<endl;
    }

};
#endif