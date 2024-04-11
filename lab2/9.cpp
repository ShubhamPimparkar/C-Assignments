// Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.


#include <iostream>
using namespace std;
class Student
{
    int roll, m1, m2, m3;
public:
    void acceptInfo(int roll, int m1, int m2, int m3)
    {
        this->roll = roll;
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }

    void display()
    {
        cout << "Roll no - " << roll << " Mark 1 is - " << m1 << " Mark 2 is - " << m2 << " Mark 3 is - " << m3;
    }
};

int main()
{
    Student s1;
    s1.acceptInfo(209, 89, 99, 96);
    s1.display();
    return 0;
}
