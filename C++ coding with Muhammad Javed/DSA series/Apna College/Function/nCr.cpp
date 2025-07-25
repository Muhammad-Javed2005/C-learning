// Calculate nCr binomial Coefficient for n and r :

#include <iostream>

#include <string>

using namespace std;

int factorial(int n)
{
    int fact{1};
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    int answer = fact_n / (fact_r * fact_nmr);
    return answer;
}


int main()
{

    int n, r;

    cout << "Enter value of n : ";
    cin >> n;
    cout << "Enter value of r : ";
    cin >> r;

    cout << "The value of nCr bionomail coefficiet is " << nCr(n, r) << endl;


    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    
    return 0;
}