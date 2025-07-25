#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter your number =" << endl;
    cin >> number;
    if (number < 2)
    {
        cout << "prime number should be greater than 1" << endl;
        return 0;
    }
    for (int i = 2 ; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "number is not prime" << endl;
            return 0;
        }
    }

    cout << "the number is prime" << endl;
    return 0;
}
