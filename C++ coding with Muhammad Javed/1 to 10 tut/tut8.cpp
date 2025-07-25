#include<iostream>

#include<iomanip>

using namespace std;

int main()
{
    int a = 34;
    cout<<"The value of a was :"<<a<<endl;
    
    a = 67;
    cout<<"The value of a is :"<<a<<endl;

    char c = 'u';
    cout<<"The value of c was :"<<c<<endl;

    c = '5';
    cout<<"The value of c is :"<<c<<endl;

    // Constant in C++ :

    const int j = 45;
    cout<<"The value of J is :"<<j<<endl;

    // // j = 67; the value of j is not possible to change because its constant 
    cout<<"The value of j is :"<<j<<endl;


    // Manipulators in C++ :


    int k , l, m ;
    cout<<"Enter the value of k is :"<<endl;
    cin>>k;

    cout<<"Enter the value of l is :"<<endl;
    cin>>l;

    cout<<"Enter the value of m is :"<<endl;
    cin>>m;


    cout<<"The value of k without setw is : "<<k<<endl;
    cout<<"The value of l without setw is : "<<l<<endl;
    cout<<"The value of m without setw is : "<<m<<endl;

    cout<<"The value of k with setw is : "<<setw(4)<<k<<endl;
    cout<<"The value of l with setw is : "<<setw(4)<<l<<endl;
    cout<<"The value of m with setw is : "<<setw(4)<<m<<endl;

    // Operators Precedence:


    int x , y ;
    cout<<"Enter the value of x is :"<<endl;
    cin>>x;

    cout<<"Enter the value of y is :"<<endl;
    cin>>y;


    int d = ((((x*5)+y)-45)+87);

    cout<<d<<endl;

     cout<<"This program is formed by Engineer Muhammad Javed";

    return 0;
}
