// Write a function to check to prime number form 2 to n;


#include<iostream>
#include<cmath>
#include<string>

using namespace std;

bool Prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n <= 4)
    {
        return true;
    }
    if(n%2 == 0 || n%3 == 0)
    {
        return false;
    }
    for (int i = 5; i*i < n ; i+=2)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    

}



int main(){
    
    
    int n ;
    cout<<"Enter Your number : ";
    cin>>n;

    for (int j = 2; j <= n; j++)
    {
        if (Prime(j))
        cout << "Your number \"" << j << "\" is a prime number." << endl;
    else
        cout << "Your number \"" << j << "\" is not a prime number." << endl;
    }


    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    return 0;
}