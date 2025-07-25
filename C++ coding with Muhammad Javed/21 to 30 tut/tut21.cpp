#include<iostream>

using namespace std;

class employee
{

    private:
        int a , b, c;

    public:
    int d , e ;

    void setData(int a , int b , int c);
    void getData(){;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
        

    }

};

void employee :: setData(int a1 , int b1 , int c1){
      
    a = a1;
    b = b1;
    c = c1;



}



int main(){
    
    employee Javed;
    // Javed.a = 87;
    // Javed.b = 76;
    // this value can not be change because it is a private not a public 
    
    Javed.d = 98;
    Javed.e = 56;
    Javed.setData(12 , 34 , 56);
    Javed.getData();







    return 0;
}
