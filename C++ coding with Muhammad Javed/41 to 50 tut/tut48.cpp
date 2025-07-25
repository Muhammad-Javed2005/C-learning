#include<iostream>

#include<string>

using namespace std;

class Base1
{
    int Data1;

    public:
        Base1(int i)
        {
            Data1 = i ;
            cout<<"Base1 Constructor is invoked. "<<endl;
        }
        void printDataBase1()
        {
            cout<<"The value of Data 1 is "<<Data1<<endl;
        }
};



class Base2
{
    int Data2;

    public:
        Base2(int i)
        {
            Data2 = i ;
            cout<<"Base2 Constructor is invoked. "<<endl;
        }
        void printDataBase2()
        {
            cout<<"The value of Data 2 is "<<Data2<<endl;
        }
};

class Derived : public Base1 , public Base2
{
    int Derived1 ;
    int Derived2 ;

    public:
        Derived (int a , int b , int c , int d):Base1(a) , Base2(b)
        {
            Derived1 = c ;
            Derived2 = d ;
            cout<<"Derived Constructor is invoked."<<endl;

        }


        void printDataDerived()
        {
            cout<<"The value of Derived of 1 is "<<Derived1<<endl;
            cout<<"The value of Derived of 2 is "<<Derived2<<endl;
        }


};



int main(){
    Derived Zunaira( 36, 85, 74, 95);
    Zunaira.printDataBase1();
    Zunaira.printDataBase2();
    Zunaira.printDataDerived();
    return 0;
}