#include<iostream>

using namespace std;

int main()
{   

    int a , b ;
    cout<<"Enter your number 1 :"<<endl;
    cin>>a;

    cout<<"Enter your number 2 :"<<endl;
    cin>>b;

    cout<<"Operator in C++ "<<endl;
    cout<<"Following are the types of operator in C++"<<endl;

    // Arithematic Operators:
    cout<<"Following are the Arithematic Operators :: "<<endl;
    cout<<"The value of "<<a<<"+"<<b<<" is : "<<(a+b)<<endl;
    cout<<"The value of "<<a<<"-"<<b<<" is : "<<(a-b)<<endl;
    cout<<"The value of "<<a<<"*"<<b<<" is : "<<(a*b)<<endl;
    cout<<"The value of "<<a<<"/"<<b<<" is : "<<(a/b)<<endl;
    cout<<"The value of "<<a<<"%"<<b<<" is : "<<(a%b)<<endl;
    cout<<"The value of "<<a<<"++ is : "<<(a++)<<endl;
    cout<<"The value of "<<a<<"-- is : "<<(a--)<<endl;
    cout<<"The value of ++"<<a<< " is :"<<(++a)<<endl;
    cout<<"The value of --"<<a<< " is :"<<(--a)<<endl;

    // Assigment Operators --> used to assign variables


    // Comparison operators :

    cout<<"Following are the Comparsion Operator"<<endl;
    cout<<"The "<<a<< "=="<<b<<" is :"<<(a==b)<<endl;
    cout<<"The "<<a<< "!="<<b<<" is :"<<(a!=b)<<endl;
    cout<<"The "<<a<< "<="<<b<<" is :"<<(a<=b)<<endl;
    cout<<"The "<<a<< ">="<<b<<" is :"<<(a>=b)<<endl;
    cout<<"The "<<a<< ">"<<b<<" is :"<<(a>b)<<endl;
    cout<<"The "<<a<< "<"<<b<<" is :"<<(a<b)<<endl;


    // Logical Operators :

    cout<<"Following are the Logical Operators"<<endl;
    cout<<"The value of logical operator and  ((a==b) && (a>b)) is :"<<((a==b) && (a>b))<<endl;
    cout<<"The value of logical operator or  ((a==b) || (a>b)) is :"<<((a==b) || (a>b))<<endl;
    cout<<"The value of logical operator not (!(a==b)) is :"<<(!(a==b))<<endl;

    return 0;
}