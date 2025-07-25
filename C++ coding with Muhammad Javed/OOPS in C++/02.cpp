#include <iostream>

#include <string>

using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;
    int ID;

    Student(string name, double cgpa, int ID)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;

        this->ID = ID;
    }

    ~Student()
    {
        cout << "Hi , I am deleting every thing!" << endl;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
        this->ID = obj.ID;
    }
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
        cout << "ID   : " << ID << endl;
    }
};

int main()
{
    Student s1("Samia", 8.56, 100125);
    s1.getInfo();

    Student s2(s1);
    *(s2.cgpaPtr) = 9.32;

    s1.getInfo();

    s2.getInfo();
    return 0;
}