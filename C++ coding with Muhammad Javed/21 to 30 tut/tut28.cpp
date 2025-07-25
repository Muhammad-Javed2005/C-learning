#include<iostream>

#include<string>

using namespace std;

class Y;

class X
{
    int data;
    friend void add (X o1 , Y o2 );
    public:
        void setData(int value)
        {
            data = value;
        }    
};


class Y
{
    int data;
    friend void add (X o1 , Y o2 );
    public:
        void setData(int value)
        {
            data = value;
        }    
};

void add (X o1 , Y o2 )
{
    cout<<"Suming data of X and Y object is "<<o1.data + o2.data<<endl;
}


int main(){
    X c1;
    c1.setData(56);

    Y c2;
    c2.setData(25);

    add(c1 , c2);

    return 0;
}