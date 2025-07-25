#include<iostream>

#include<string>

using namespace std;

int factorial(int n )
{
    int fact{1};
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
        
    }
    return fact;
}

int main(){
    

    int n ;
    cout<<"Enter your number of factorial is :";
    cin>>n;

    int a = factorial( n );

    cout<<"Factorial of "<<n<<" is "<<a<<endl;
    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    
    return 0;
}