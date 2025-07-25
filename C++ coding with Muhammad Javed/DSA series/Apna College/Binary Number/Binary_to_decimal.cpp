#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    

    int Bin;
    cout<<"Enter Your Binary number : ";
    cin>>Bin;
    int Binary = Bin;
    
    int ans{0} , rem{0} , powe{0};


    while(Bin>0)
    {
        rem = Bin%10;
        Bin = Bin/10;
        ans += (rem*(pow(2 , powe)));
        powe += 1;
    }

    cout<<"Your Number in Binary is  "<<Binary<<"."<<endl;
    cout<<"After conversion Your number in Decimal is "<<ans<<"."<<endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;

}