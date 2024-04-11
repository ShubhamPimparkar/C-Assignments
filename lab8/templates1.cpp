#include<iostream>

using namespace std;
class Date{
    private:
        int date,month,year;
    public:
        Date(){
             this->date=0;
            this->month=0;
            this->year=0;

        }
        Date(int date,int month,int year){
            this->date=date;
            this->month=month;
            this->year=year;
        }

    template <class T>
        void swap(T &d1, T &d2){
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Date D1 Before - ";
            cout<<"Date: "<<date<<" / Month: "<<month<<" / Year "<<year<<endl;
            cout<<"Date D2 Before - ";
            cout<<"Date: "<<d2.date<<" / Month: "<<d2.month<<" / Year "<<d2.year<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;

            T d3;
            d3.date=d1.date;
            d3.year=d1.year;
            d3.month=d1.month;

            d1.date=d2.date;
            d1.month=d2.month;
            d1.year=d2.year;
            
            d2.date=d3.date;
            d2.month=d3.month;
            d2.year=d3.year;

            display(d2);
            
        }
        void display(Date d2){
            cout<<"Date D1 After - ";
            cout<<"Date: "<<date<<" / Month:  "<<month<<" / Year "<<year<<endl;
            cout<<"Date D2 After - ";
            cout<<"Date: "<<d2.date<<" / Month:  "<<d2.month<<" / Year "<<d2.year<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
        }
};

int main(){
    Date d1(14,3,2024);
    Date d2(19,6,2022);

    d1.swap(d1,d2);


    return 0;
}