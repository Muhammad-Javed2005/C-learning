#include <iostream>

#include <string>

using namespace std;

int main()
{

    int number;
    cout << "Enter Your number : ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Number is even.";
    }
    else
    {
        cout << "Number is odd.";
    }

    return 0;
}