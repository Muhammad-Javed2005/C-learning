#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Student
{
protected:
    int roll_number;
    string name;

public:
    void set_roll_number(int);
    void get_roll_number(void);
    void set_name(void);
    void get_name(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << "Your roll number is " << roll_number << endl;
}

void Student::set_name()
{
    cout << "Enter your name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
    getline(cin, name);
}

void Student::get_name()
{
    cout << "Hello " << name << "!" << endl;
}

class Exam : public Student
{
protected:
    int Maths, Physics, Chemistry, Urdu, Islamiyat, English;
    int total_marks;

public:
    void set_marks(void);
    void get_marks(void);
    void calculate_total_marks(void);
};

void Exam::set_marks()
{
    cout << "Enter your Maths marks: ";
    cin >> Maths;
    cout << "Enter your Physics marks: ";
    cin >> Physics;
    cout << "Enter your Chemistry marks: ";
    cin >> Chemistry;
    cout << "Enter your Urdu marks: ";
    cin >> Urdu;
    cout << "Enter your English marks: ";
    cin >> English;
    cout << "Enter your Islamiyat marks: ";
    cin >> Islamiyat;
}

void Exam::get_marks()
{
    cout << "Marks obtained in Maths: " << Maths << endl;
    cout << "Marks obtained in Physics: " << Physics << endl;
    cout << "Marks obtained in Chemistry: " << Chemistry << endl;
    cout << "Marks obtained in Urdu: " << Urdu << endl;
    cout << "Marks obtained in English: " << English << endl;
    cout << "Marks obtained in Islamiyat: " << Islamiyat << endl;
}

void Exam::calculate_total_marks()
{
    total_marks = Maths + Physics + Chemistry + English + Urdu + Islamiyat;
    cout << "Your total marks out of 600 are: " << total_marks << endl;
}

class Result : public Exam
{
protected:
    float Percentage;

public:
    void calculate_percentage(void);
    void get_percentage(void);
    void Display_result(void);
};

void Result::calculate_percentage()
{
    Percentage = (static_cast<float>(total_marks) / 600) * 100;
}

void Result::get_percentage()
{
    cout << "Your percentage in the exam is: " << Percentage << " %" << endl;
}

void Result::Display_result()
{
    cout << "Enter roll number: ";
    int roll;
    cin >> roll;
    set_roll_number(roll);

    set_name();
    set_marks();

    cout << endl;
    get_roll_number();
    get_name();
    get_marks();

    calculate_total_marks();
    calculate_percentage();
    get_percentage();
}

int main()
{
    Result Javed, Zunaira;

    cout << "Enter details for Javed:" << endl;
    Javed.Display_result();

    cout << "\nEnter details for Zunaira:" << endl;
    Zunaira.Display_result();

    return 0;
}
