// Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
// data members. Also add the display function. Create Default and Parameterized constructors. Create 
// the object of this class in main method and invoke all the methods in that class. 

#include <iostream>
using namespace std;
class Book{
    string bname,author;
    int id,price;
    public:
    Book(){
        bname = "Null";
        id = 0;
        author = " Null";
        price = 0;
    }
    Book(string bname,int id, string author, int price){
        this->bname=bname;
        this->id=id;
        this->author=author;
        this->price=price;
    }
    void getBame(){
        cout<<"Book Name is - "<<bname;
    }
    void getauthor(){
        cout<<"Author Name is - "<<author;
    }
    void getId(){
        cout<<"Book id is - "<<id;
    }
    void getPrice(){
        cout<<"Book price is - "<<price;
    }
    void getDisplay(){
        cout<<"Book Name is - "<<bname<<endl;
        cout<<"Author Name is - "<<author<<endl;
        cout<<"Book id is - "<<id<<endl;
        cout<<"Book price is - "<<price<<endl;
    }
};
int main(){
    Book b1("Harry Potter",108,"JK Rowling",500);
    b1.getDisplay();
    Book b2;
    b2.getDisplay();
return 0;
}