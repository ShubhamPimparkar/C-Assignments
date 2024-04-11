#include<iostream>
using namespace std;

template <class B,class S>
class Book{
    private:
        B bookid,price;
        S name,author;
    public:
     Book(){

     }
     Book(B bookid,B price, S name,S author){
        this->bookid=bookid;
        this->price=price;
        this->name=name;
        this->author=author;
     }
     void display(){
        cout<<"-------------------------------------"<<endl;
        cout<<bookid<<" "<<price<<" "<<name<<" "<<author<<endl;
        cout<<"-------------------------------------"<<endl;
     }     
};


template <class D>
class Date{
    private:
        D date,month,year;
    public:
     Date(){

     }
     Date(D date,D month, D year){
        this->date=date;
        this->month=month;
        this->year=year;
        
     }
     void display(){
        cout<<date<<"/"<<month<<"/"<<year<<endl;
        cout<<"-------------------------------------"<<endl;
     }
};


int main(){
    Book<int,string> b1(11,300,"HarryPotter","Rowling");
    b1.display();

    Date<int> d1(12,4,2001);
    d1.display();
    
    return 0;
}
