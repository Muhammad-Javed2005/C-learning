#include <iostream>

#include <string>

#include <limits>

using namespace std;

class Student
{
protected:
    int roll_number;
    string names;

public:
    void set_roll_number(int);
    void get_roll_number(void);
    void name(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "Your roll number is " << roll_number << endl;
}

void Student ::name()
{
    string name;
    cout << "Enter your name : ";
    cin.ignore();
    getline(cin, name);
    cout << "Hello " << name << " !" << endl;
}

class Exam : public Student
{
protected:
    int Maths;
    int Physics;
    int Chemistry;
    int Urdu;
    int Islamiyat;
    int English;
    float total_marks;
public:
    void set_marks(void);
    void get_marks(void);
    void total_marks(void);
};

void Exam ::set_marks()
{
    cout << "Enter your Maths marks : ";
    cin >> Maths;
    cout << "Enter your Physics marks : ";
    cin >> Physics;
    cout << "Enter your Chemistry marks : ";
    cin >> Chemistry;
    cout << "Enter your Urdu marks : ";
    cin >> Urdu;
    cout << "Enter your English marks : ";
    cin >> English;
    cout << "Enter your Islamiyat marks : ";
    cin >> Islamiyat;
}

void Exam ::get_marks()
{
    cout << "You marks obtained in Math are : " << Maths << endl;
    cout << "You marks obtained in Physics are : " << Physics << endl;
    cout << "You marks obtained in Chemistry are : " << Chemistry << endl;
    cout << "You marks obtained in Urdu are : " << Urdu << endl;
    cout << "You marks obtained in English are : " << English << endl;
    cout << "You marks obtained in Islamiyat are : " << Islamiyat << endl;
}

void Exam :: total_marks()
{
    int total_marks = (Maths+Physics+Chemistry+English+Urdu+Islamiyat);
    cout<<"Your Total marks is 500"<<endl;
    cout<<"Your  total obtained in exam is "<<total_marks<<endl;
}

class Result : public Exam
{
    protected:
        float Percentage;

    public:
        void set_percentage(void);
        void get_percentage(void);
        void Display_result(void);
};

void Result :: set_percentage()
{
    // float Percentage = ((total_marks) / 500) * 100;
    Percentage = (static_cast<float>(total_marks) / 500) * 100;
}


void Result :: get_percentage()
{
    cout<<"Your Percentage in Exam is "<<Percentage <<" %"<<endl;
}

void Result :: Display_result()
{
    void set_roll_number();
    void get_roll_number();
    void name();
    void set_marks();
    void get_marks();
    void total_marks();
    void set_percentage();
    void get_percentage();
    void Display_result();
}

int main()
{
    Result Javed , Zunaira;
    Javed.Display_result();
    Zunaira.Display_result();
    return 0;
}