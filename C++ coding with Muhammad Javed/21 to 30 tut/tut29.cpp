#include<iostream>

#include<string>

using namespace std;

class complex

{
    int a , b;
    public:
        complex(void);

        void printNumber(void)
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};


complex :: complex(void)
{
    a = 10;
    b = 20;
}
int main(){
    complex c1 ;
    c1.printNumber();
    return 0;
}