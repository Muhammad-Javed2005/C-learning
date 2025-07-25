#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void setData1(void);
    void perform_function1(void);
};

void SimpleCalculator ::setData1()
{
    cout << "Enter your value of a: ";
    cin >> a;
    cout << "Enter your value of b: ";
    cin >> b;
}

void SimpleCalculator ::perform_function1()
{
    char x;
    cout << "Enter your choice for operation (+, -, *, /): ";
    cin >> x;
    if (x == '+')
    {
        int result = (a + b);
        cout << "The addition of a and b is: " << result << endl;
    }
    else if (x == '-')
    {
        int result = (a - b);
        cout << "The subtraction of a and b is: " << result << endl;
    }
    else if (x == '*')
    {
        int result = (a * b);
        cout << "The multiplication of a and b is: " << result << endl;
    }
    else if (x == '/')
    {
        if (b == 0)
        {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
        else
        {
            int result = (a / b);
            cout << "The division of a and b is: " << result << endl;
        }
    }
    else
    {
        cout << "Invalid operation!" << endl;
    }
}

class ScientificCalculator
{
protected:
    double angle_radian;

public:
    void setData2();
    void perform_function2();
};

void ScientificCalculator ::setData2()
{
    double angle_degree; 
    cout << "Enter your angle in degrees: ";
    cin >> angle_degree;
    angle_radian = (angle_degree * M_PI / 180.0);
}

void ScientificCalculator ::perform_function2()
{
    char y;
    cout << "Choose a function (s for sin, c for cos, t for tan, l for log): ";
    cin >> y;

    if (y == 's')
    {
        double result = sin(angle_radian);
        cout << "The value of sin is: " << result << endl;
    }
    else if (y == 'c')
    {
        double result = cos(angle_radian);
        cout << "The value of cos is: " << result << endl;
    }
    else if (y == 't')
    {
        double result = tan(angle_radian);
        cout << "The value of tan is: " << result << endl;
    }
    else if (y == 'l')
    {
        double result = log(angle_radian);
        cout << "The value of log is: " << result << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
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
    perform_function1();
    setData2();
    perform_function2();
}

int main()
{
    cout << "Muhammad Javed" << endl;
    HybridCalculator Javed;
    Javed.Display_perform_Function();
    return 0;
}
