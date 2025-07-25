#include<iostream>

#include<string>

using namespace std;


// Function Definition

int printHello()
{
    cout<<"Hello World"<<endl;
    cout<<"Hello Javed"<<endl;

    return 8;
}


int main(){
    
    // Function Call / invoke 

    printHello(); 
    printHello(); 
    printHello(); 

    // int val =  printHello();
    // cout<<"Value = "<<val;

    cout<<"Value = "<<printHello();
    

    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    return 0;
}