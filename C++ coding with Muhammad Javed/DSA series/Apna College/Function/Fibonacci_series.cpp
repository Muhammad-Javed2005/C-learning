// Write a function to print a Fibonacci series

#include<iostream>

#include<string>

using namespace std;


int first{0} , second{1};
int Fibonacci(void)
{
    int next;
    cout<<first<<" ";
    next = first + second ;
    second = first;
    first = next;

}


int main(){
    

    int n;
    cout<<"Enter Your size of Fibonacci Series: ";
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        Fibonacci();
    }
    cout<<endl;
    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;

    return 0;
}