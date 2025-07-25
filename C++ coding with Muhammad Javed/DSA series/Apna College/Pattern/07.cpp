#include<iostream>

#include<string>

using namespace std;

int main(){
    // Pyramid Pattern !

    cout<<"Pyramid Pattern !"<<endl;


    int n;
    
    cout<<"Enter your size of Pattern : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }

        char num{'A'};
        for (int j = 1; j <= i+1; j++)
        {
            cout<<num;
            num++;

        }

        char num1{'A'};
        for (int j = i;  j >=1 ; j--)
        {
            cout<<num1;
            num1++;
        }
        cout<<endl;
    }
    
    return 0;
}