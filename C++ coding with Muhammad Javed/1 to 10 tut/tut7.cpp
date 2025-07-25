#include<iostream>

using namespace std;

int c = 45;

int main(){


    //********* Build  in Data types ********  


    int a, b , c;
    cout<<"Enter your number 1 :"<<endl;
    cin>>a;

    cout<<"Enter your number 2 :"<<endl;
    cin>>b;

    c = a+b;

    cout<<"The sum of "<<a<<"+"<<b<<" is "<<c<<endl;
    cout<<"The value of Global c is "<<::c<<endl;



    //******** FLoat , Double and Long Double Literals ********


    float d = 34.4f;
    long double  e = 34.4l;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;


    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;


    // ******** Reference Variables ********

    float x = 455;
    float & y = x ;

    cout<<x<<endl;
    cout<<y<<endl;

    //******** Typecasting ******** 


    int m = 45; 
    float n = 95.96;

    cout<<"The value of m is "<<(float)m<<endl; 
    cout<<"The value of m is "<<float(m)<<endl;

    cout<<"The value of n is "<<(int)n<<endl; 
    cout<<"The value of n is "<<int(n)<<endl; 

    int k = int(n);
    cout<<k;

    cout<<"The expression is "<<m+n<<endl;
    cout<<"The expression is "<<m+(int)n<<endl;
    cout<<"The expression is "<<m+int(n)<<endl;


    cout<<"This program is formed by Engineer Muhammad Javed";


    return 0;
}

