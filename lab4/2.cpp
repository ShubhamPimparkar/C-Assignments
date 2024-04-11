// Create a class Person with data members as name, age, city. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class. 

#include <iostream>
using namespace std;
class Person{
    private:
    int age;
    string name,city;

    public:
    Person(){
        age = 0;
        name = "Null";
        city = "Null";
    }
    Person(string name, int age , string city){
        this->age=age;
        this->name=name;
        this->city=city;

    }
    void setName(string name){
         this->name=name;
    }
    void setCity(string city){
         this->city=city;
    }
    void setAge(int age){
         this->age=age;
    }

    void getAge(){
        cout<<"Age is - "<<age;
    }
    void getName(){
        cout<<"Name is - "<<name;
    }
    void getCity(){
        cout<<"City is - "<<city;
    }

};
int main(){
    Person p1;
    Person p2("Shubham",22,"Pune");
    p1.setName("Ram");
    p1.setAge(24);
    p1.setCity("Pune");

return 0;
}

