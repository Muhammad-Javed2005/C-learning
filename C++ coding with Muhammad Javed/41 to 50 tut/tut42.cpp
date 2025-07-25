#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class SimpleCalculator
{
protected:
    int a, b;
    char x;

public:
    void setData1(void);
    void perfrom_function1(void);
};

void SimpleCalculator ::setData1()
{
    cout << "Enter your value of a : ";
    cin >> a;
    cout << "Enter your value of b : ";
    cin >> b;
}

void SimpleCalculator ::perfrom_function1()
{
    char x;
    cout << "Enter your Choice for perform function(+ ,- ,* /): ";
    cin >> x;
    if (x == '+')
    {
        int result = (a + b);
        cout << "The addition of a and b is : " << result << endl;
    }

    else if (x == '-')
    {
        int result = (a - b);
        cout << "The Subraction of a and b is : " << result << endl;
    }

    else if (x == '*')
    {
        int result = (a * b);
        cout << "The Mutiplication of a and b is : " << result << endl;
    }

    else if (x == '/')
    {
        int result = (a / b);
        cout << "The Division  of a and b is : " << result << endl;
    }

    else
    {
        cout << "Your choice in not include in SimpleCalculator !!" << endl;
    }
}

class ScientificCalculator
{
protected:
    double c;
    char y;
    double angle_radian;

public:
    void setData2();
    void perform_function2();
};

void ScientificCalculator ::setData2()
{
    double angle_degree = c;

    cout << "Enter your value of angle in degree : ";
    cin >> angle_degree;

    double angle_radian = (angle_degree * M_PI / 180.0);
}

void ScientificCalculator ::perform_function2()
{
    char y;
    cout << "Enter your Choice for perform function(s ,c ,t ,l): "<<endl;
    cout << "s for Sin function !"<<endl;
    cout << "c for Cos function !"<<endl;
    cout << "t for Tan function !"<<endl;
    cout << "l for log function !"<<endl;
    cin >> y;

    if (y == 's')
    {
        double result = sin(angle_radian);
        cout << "The value of sin of your given angle is : " << result << endl;
    }

    else if (y == 'c')
    {
        double result = cos(angle_radian);
        cout << "The value of cos of your given angle is : " << result << endl;
    }

    else if (y == 't')
    {
        double result = tan(angle_radian);
        cout << "The value of tan of your given angle is : " << result << endl;
    }

    else if (y == 'l')
    {
        double result = log(angle_radian);
        cout << "The value of log of your given value is : " << result << endl;
    }
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void Display_perform_Function();
};

void HybridCalculator ::Display_perform_Function()
{
    setData1();
    perfrom_function1();
    setData2();
    perform_function2();
}

int main()
{
    cout<<"Muhammad Javed"<<endl;
    HybridCalculator Javed;
    Javed.Display_perform_Function();
    return 0;
}