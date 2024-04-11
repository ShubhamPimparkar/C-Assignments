// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
// object of this class in main method and invoke all the methods in that class. 

#include <iostream>
using namespace std;
class Date{
    int dd,mm,yy;
    public:
    Date(){
        dd=1;
        mm=11;
        yy=2001;
    }
    Date(int dd, int mm, int yy){
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    void setdd(int dd){
        this->dd = dd;
    }
    void setmm(int mm){
        this->mm = mm;
    }
    void setyy(int yy){
        this->yy = yy;
    }
    void display(){
        cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }


};
int main(){
    Date d1;
    Date d2(12,4,3000);
    Date d3;
    d3.setdd(6);
    d3.setmm(7);
    d3.setyy(2004);
    d1.display();
    d2.display();
    d3.display();

return 0;
}