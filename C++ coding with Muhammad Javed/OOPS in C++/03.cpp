#include <iostream>

#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "Parent Constructor invoked !!!" << endl;
    }

    ~Person()
    {
        cout << "Parent Distructor invoked !!" << endl;
    }
};

class Student : public Person
{
public:
    int roll_no;

    Student()
    {
        cout << "Child Constructor invoked !!" << endl;
    }

    ~Student()
    {
        cout << "Child Distructor invoked !!" << endl;
    }

    void getInfo()
    {
        cout << "Name     : " << name << endl;
        cout << "Age      : " << age << endl;
        cout << "Roll no  : " << roll_no << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Muhammad Javed";
    s1.age = 18;
    s1.roll_no = 1234;
    s1.getInfo();
    return 0;
}