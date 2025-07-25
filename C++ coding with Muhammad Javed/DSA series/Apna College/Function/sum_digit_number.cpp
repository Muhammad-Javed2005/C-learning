// Calculate the sum of Digits of Number ::

#include<iostream>

#include<string>

using namespace std;

int main(){
    
    int number , digit , sumOfDigit;
    cout<<"Enter Your number :";
    cin>>number;
    sumOfDigit = 0 ;
    
    cout<<"The number is "<<number<<endl;

    while(number>0)
    {
        digit = number%10;
        number = number/10;
        sumOfDigit += digit;
    }

    cout<<"The sum of number of Digit is "<<sumOfDigit<<endl;


    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    return 0;
}