#include <iostream>

#include <string>

using namespace std;

int main()
{

    // Inverse Triangle with Number !

    cout << "Inverse Triangle with Number\a!"<<endl;

    int n;
    cout << "Enter Your size of Pattern : ";
    cin >> n;

    int num{1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << num;
        }
        num++;
        cout << endl;
    }



    // Inverse Triangle with Alphabets !

    cout << "Inverse Triangle with Alphabets!"<<endl;


    cout << "Enter Your size of Pattern : ";
    cin >> n;

    char ch{'A'};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    return 0;
}
