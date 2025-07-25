#include<iostream>

using namespace std;

int main(){
    
    // Array Example :
    int marks[5] = {67,89,90,78,60};


    int mathmarks[5];
    mathmarks[0] = 898;
    mathmarks[1] = 658;
    mathmarks[2] = 6758;
    mathmarks[3] = 9856;
    mathmarks[4] = 7846;


    cout<<"These are the math marks ..."<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;
    


    cout<<"These are the marks ...."<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;

    // You can change the value of an array befor print

    marks[2] = 6789;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    // Print array with loop :

    for (size_t i = 0; i <=4; i++)
    {

        cout<<"Print array with loop";
        cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
    }
    
    // Pointer and Array:


    int * p = marks;

    cout<<"The value of marks [0] is "<<*p<<endl; 
    cout<<"The value of marks [1] is "<<*(p+1)<<endl; 
    cout<<"The value of marks [2] is "<<*(p+2)<<endl; 
    cout<<"The value of marks [3] is "<<*(p+3)<<endl; 

    return 0;
}