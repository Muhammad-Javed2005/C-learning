#include<iostream>

using namespace std;

int main(){
    
    /* What is a pointer??
    --> It s a data types.
    --> which hold the address  of other data types.
       */ 


    int a = 3;
    int*b = &a;
    // & --> (Address of ) operators 

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // (*) --> (value at ) dereference operators 
    cout<<"The value at address b "<<*b<<endl;

    // Pointer to pointer :

    int ** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value of at address c is "<<**c<<endl;


    return 0;
}