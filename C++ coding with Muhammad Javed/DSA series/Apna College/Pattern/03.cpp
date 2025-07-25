#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Triangle Pattern with Stars !

    cout << "Triangle  Pattern with Stars!" << endl;

    int n;
    cout << "Enter your size of Pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // Triangle Pattern With Number !

    cout << "Triangle Pattern With Number!" << endl;

    cout << "Enter Your size of Pattern : ";
    cin >> n;

    int num{1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(3) << num;
        }
        cout << endl;
        num++;
    }

    // Triangle Pattern With Number !

    cout << "Triangle Pattern With Number !" << endl;

    cout << "Enter Your size of Pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(3) << num;
            num++;
        }
        cout << endl;
    }

    // Triangle Pattern With Alphabets !

    cout << "Triangle Pattern with Alphabets !" << endl;

    cout << "Enter Your size of Pattern : ";
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(3) << ch;
        }
        cout << endl;
        ch++;
    }

    // Triangle Pattern With Alphabets !

    cout << "Triangle Pattern with Alphabets !" << endl;

    cout << "Enter Your size of Pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(3) << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}