#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    // Triangle Reverse  Pattern!

    cout << "Triangle Reverse Pattern ! " << endl;

    int n;
    cout << "Enter your size of Pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << setw(3) << j;
        }
        cout << endl;
    }

    // Triangle Reverse Pattern !

    cout << "Triangle Rverse  Pattern !" << endl;

    cout << "Enter your size of Pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i + 1; j++)
        {

            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }

    // Floyd's Triangle Pattern with number!

    cout << "Floyd's Triangle Pattern with number!" << endl;

    cout << "Enter your size of Pattern : ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(3) << num;
            num++;
        }
        cout << endl;
    }

    // Floyd's Triangle Pattern with Alphabets!

    cout << "Floyd's Triangle Pattern with Alphabets!" << endl;

    cout << "Enter your size of Pattern : ";
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(3) << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}