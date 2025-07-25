#include<iostream>

#include<string>

using namespace std;

class complex 
{
    int a ;
    int b ;
    friend complex sumComplex (complex o1 , complex o2 );


    public :
        void setData(int v1 , int v2)
        {
            a = v1;
            b = v2;

        }
        void printNumber()
        {
            cout<<"Your number is "<<a<< " + "<<b<<"i"<<endl;
        }
};


complex sumComplex (complex o1 , complex o2 )
{
    complex o3;
    o3.setData((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}




int main(){
    
    complex c1 , c2 , sum;
    c1.setData(6,8);
    c1.printNumber();

    c2.setData(9,4);
    c2.printNumber();
    cout<<"After sum of two complex number is "<<endl;
    sum = sumComplex(c1 , c2);
    sum.printNumber();



    return 0;
}