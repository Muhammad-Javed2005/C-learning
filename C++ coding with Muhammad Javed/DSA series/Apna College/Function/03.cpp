// / Write a function to check if a number is prime or not 


#include<iostream>

#include<string>

using namespace std;

int Prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            cout<<"Your number \""<<n<<"\" is not prime number ."<<endl;
            return 0;
        }

    }
    cout<<"Your number \""<<n<<"\" is prime number ."<<endl;
    
}


int main(){
    
    int n ;
    cout<<"Enter Your number: ";
    cin>>n;
    Prime(n);

    return 0;
} 