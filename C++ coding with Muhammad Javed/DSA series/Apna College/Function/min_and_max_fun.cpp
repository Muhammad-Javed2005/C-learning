#include<iostream>

#include<string>

using namespace std;

int minFunc(int a , int b)
{
    if (a<b)
    {
        return a ;
    }

    else 
    {
        return b;
    }
}

int maxFunc(int a , int b)
{
    if (a>b)
    {
        return a ;
    }

    else 
    {
        return b;
    }
}
int main(){
    int  a = 15 , b = 61;
    cout<<"Minimum = "<< minFunc(a , b)<<endl;
    cout<<"Maximum = "<< maxFunc(a , b)<<endl;
    
    cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    return 0;
}