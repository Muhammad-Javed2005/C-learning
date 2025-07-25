#include<iostream>

#include<string>

using namespace std;

class Base
{
    int Data1;
    public:
        int Data2;
        void setData();
        int getData1();
        int getData2();

};

void Base ::  setData()
{
    Data1 = 78;
    Data2 = 56;
}


int Base :: getData1()
{
    return Data1;
}

int Base :: getData2()
{
    return Data2;
}



class Derived : public Base
{
    int Data3;
    public:
        void process();
        void display();
};


void Derived :: process (){
    Data3 = Data2 * getData1();
}

void Derived :: display()
{
    cout<<"The value of Data 1 is  " <<getData1()<<endl;
    cout<<"The value of Data 2 is  " <<Data2<<endl;
    cout<<"The value of Data 3 is  " <<Data3<<endl;
}


int main(){
    
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}