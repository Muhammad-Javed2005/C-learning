#include<iostream>

#include<string>

using namespace std;

int main(){
    
    int deci;
    cout<<"Enter Your Decimal number : ";
    cin>>deci;
    int decimal = deci;
    
    int ans{0} , rem{0} , pow{1};
    while(deci>0)
    {
        rem = deci%2;
        deci = deci/2;
        ans += (rem*pow);
        pow*=10;
    }

    cout<<"Your Number in Decimal is  "<<decimal<<"."<<endl;
    cout<<"After conversion Your number in Binary is "<<ans<<"."<<endl;


    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    return 0;
}

