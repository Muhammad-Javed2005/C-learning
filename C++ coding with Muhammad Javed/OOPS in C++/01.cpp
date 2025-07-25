#include <iostream>

#include <string>

using namespace std;

class Teacher
{
    // Properties // Attributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Method // Member Function

    // setter

    void setDept()
    {
        cout << "Enter your Department : ";
        cin >> dept;
    }
    void setName()
    {
        cout << "Enter your name : ";
        cin >> name;
    }

    void setSubject()
    {
        cout << "Enter your Subject : ";
        cin >> subject;
    }

    void setSalary()
    {
        cout << "Enter  your Salary : ";
        cin >> salary;
    }

    // Getter

    void getName()
    {
        cout << "Hello " << name << endl;
    }

    void getDept()
    {
        cout << "Your department is " << dept << endl;
    }

    void getSalary()
    {
        cout << "Your salary is : " << salary << endl;
    }

    void getSubject()
    {
        cout << "Your subject is : " << subject << endl;
    }

    void Display()
    {
        setName();
        setDept();
        setSalary();
        setSubject();
        getName();
        getDept();
        getSubject();
        getSalary();
    }
};

int main()
{

    Teacher t1;

    t1.Display();

    return 0;
}