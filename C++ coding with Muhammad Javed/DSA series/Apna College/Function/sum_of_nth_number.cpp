#include<iostream>

#include<string>

using namespace std;

int sumOfNumber(int n)
{

    int sum{0};

    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}




int main(){
   
   
    int n ;
    cout<<"Enter your number : ";
    cin>>n;

    cout<<"Sum of number is  "<<sumOfNumber(n);


    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    
    return 0;
}