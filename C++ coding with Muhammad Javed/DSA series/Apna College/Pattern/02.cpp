#include<iostream>
#include <iomanip>
#include<string>

using namespace std;

int main(){
    
    // Square Patter With Number:

    cout<<"Square Patter With Number! "<<endl;
    
    int n;
    cout<<"Enter Your number of Pattern Size : ";
    cin>>n;

    int num{1} ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< setw(4) <<num<<" ";
            num++;
        }
        cout<<endl;   
    }



    // Square Patter With Alphabets:

    cout<<"Square Patter With Alphabets! "<<endl;
    
    
    cout<<"Enter Your number of Pattern Size : ";
    cin>>n;

    char ch{'A'} ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< setw(4) <<ch<<" ";
            ch++;
        }
        cout<<endl;   
    }
    
    return 0;
}