#include<iostream>

using namespace std;

// Recursion in C++:

int factorial(int n){
    if(n<=1){
        return 1 ;

    }
    return n * factorial(n-1);

}


int fib (int a ){

    if(a<2){
        return 1 ;

    }
    return fib(a-1) + fib(a-2);

}


int main(){
    
    int n ,a;
    cout<<"Enter your number : "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    
    cout<<"Enter your number :"<<endl;
    cin>>a;
    cout<<"The term in Fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;

    return 0;
}