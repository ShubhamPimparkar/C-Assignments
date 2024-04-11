// 1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.

// Helper Funcs - 
#include <iostream>
using namespace std;
class student{
    private:
    int total,roll,m1,m2,m3;
    char grade;
    int prec;
    string name;
    
    void Caltotal(){
        total = m1+m2+m3;
    }
    void Calperc(){
        prec = total/3;
    }
    void Calgrade(){
        if (prec>80)
        {
            grade = 'A';
        }
        else if (prec>70 && prec<80)
        {
            grade = 'B';
        }
        else if (prec>60 && prec <70)
        {
            grade = 'C';
        }
        else
        {
            grade = 'F';
        }  
    }
    public:
   
    void setName(string name){
        this->name=name;
    }
    void setm1(int m1){
        this->m1=m1;
    }
    void setm2(int m2){
        this->m2=m2;
    }
    void setm3(int m3){
        this->m3=m3;
    }
    void getName(){
        cout<<"Name is - "<<name<<endl;
    }
    void getTotal(){
        Caltotal();
        cout<<"Total is - "<<total<<endl;
    }
    void getPerc(){
        Calperc();
        cout<<"Percentage  is - "<<prec<<endl;
    }
    void getGrade(){
        Calgrade();
        cout<<"Grade  is - "<<grade<<endl;
    }
    
};
int main(){
    string nam1;
    int mark1,mark2,mark3;
    cout<<"Enter your name - ";
    cin>>nam1;
    student s1;
    s1.setName(nam1);
    s1.getName();
    cout<<"Enter Marks 1 - ";
    cin>>mark1;
    cout<<"Enter Marks 2 - ";
    cin>>mark2;
    cout<<"Enter Marks 3 - ";
    cin>>mark3;
    s1.setm1(mark1);
    s1.setm2(mark2);
    s1.setm3(mark3);
    s1.getTotal();
    s1.getPerc();
    s1.getGrade();



return 0;
}