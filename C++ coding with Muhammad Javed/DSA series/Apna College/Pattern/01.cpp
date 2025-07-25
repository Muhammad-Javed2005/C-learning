#include <iostream>

#include <string>

using namespace std;

int main()
{

    // Square Pattern with number :

    cout << "Square Pattern with number !" << endl;

    int n;

    cout << "Enter Your number of Pattern size: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Square Pattern with stars :

    cout << "Square Pattern with stars !" << endl;

    cout << "Enter Your number of Pattern size : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }



    // Square Pattern with Alphabets:  :

    cout << "Square Pattern with Alphabets !" << endl;

    cout << "Enter Your number of Pattern size: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }




    return 0;
}