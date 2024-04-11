
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Employee{
    private:
        int empid;
        string name;
        double salary;
    public:
        void accept(){
            cout<<"Enter the empid, name, salary: ";
            cin>>empid>>name>>salary;
        }

        void display(){
            cout<<"\nEmpId: "<<empid<<"  Emp Name: "<<name<<"  Emp Salary: "<<salary<<endl;
        }
};

int main(){
    Employee emp1;
    emp1.accept();

    ofstream outfile("employee.txt");

    outfile.write((char *) &emp1, sizeof(Employee));
    cout<<"\nEmployee 1 stored...\n\n";

    Employee emp2;
    emp2.accept();

    outfile.write((char *) &emp2, sizeof(Employee));
    cout<<"\nEmployee 2 stored...\n\n10";

    outfile.close();

    ifstream inputfile("employee.txt");

    cout<<"Reading from file.."<<endl;

    inputfile.read((char *) &emp1, sizeof(Employee));
    emp1.display();

    inputfile.read((char *) &emp2, sizeof(Employee));
    emp2.display();

    inputfile.close();

    return 0;

}






using namespace std;
class Book
{
    int id, price;
    char name[30];
    char author[30];

public:
    Book()
    {
    }
    Book(int id, char *nm, char *auth, int price)
    {
        this->id = id;
        this->price = price;
        strcpy(name, nm);
        strcpy(author, auth);
    }
    void accept(int id, char *nm, char *auth, int price)
    {
        this->id = id;
        this->price = price;
        strcpy(name, nm);
        strcpy(author, auth);
    }

    void display()
    {
        cout << "Book Id - " << id << endl;
        cout << "Book Name - " << name << endl;
        cout << "Book Author - " << author << endl;
        cout << "Book Price - " << price << endl;
    }
};
void writeBook(string filename, Book &b1)
{  // Book b1;
    ofstream ofobj;
    ofobj.open(filename, ios::app | ios::binary);

    ofobj.write((char *)&b1, sizeof(Book));

    ofobj.close();

    b1.display();
    cout << "Written in Book" << endl;
}
void readBook(string filename)
{   

    Book b2;
    int i = 0;
    ifstream ifObj(filename, ios::binary);
    


    ifObj.close();
    for (int j = 0; j < i - 1; j++)
    {
        b1[j].display();
    }
}

int main()
{
    char nm[20];
    char auth[20];
    int id, price, ch;
    int n = 0;
    string filename;
    Book b;
    int index = -1;
    do
    {
        cout << "1.Add a Book \n2.Display\n3.Write into File\n4.Read from File\n5.Exit" << endl;
        cout << "=============================" << endl;
        cout << "Enter Choice - ";
        cin >> ch;
        switch (ch)
        {
        // (c_str)
        case 1:
            index++;
            cout << "Enter no. of books to Enter - ";
            cin >> n;
            cout << "Enter Book id  -  name  -  author  -  price - ";
            cin >> id >> nm >> auth >> price;
            ptr[index] = new Book(id, nm, auth, price);
            // cout << "Enter Name of File to write - ";
            // cin >> filename;
            // writeBook(filename, *ptr[index]);
            cout << "Added" << endl;
            cout << "=============================" << endl;

            break;
        case 2:
            for (int i = 0; i <= index; i++)
            {
                ptr[i].display();
                cout << "=============================" << endl;
            }

            break;

         case 3:
               //Book temp;

        cout << "Enter no. of books to Enter - ";
            cin >> n;

            cout << "Enter Name of File to write - ";
            cin >> filename;
              temp.accept(12,"IACSD","yyy",200);


            writeBook(filename,temp);
            cout << "=============================" << endl;
            break;

        case 4:
            cout << "Enter Name of File to read - ";
            cin >> filename;
            cout << "=============================" << endl;
            readBook(filename);
            cout << "=============================" << endl;

            break;
        default:
            cout << "Enter proper choice" << endl;
            break;
        }
    } while (ch != 5);
}