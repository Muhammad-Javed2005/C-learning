#include<iostream>

#include<string>

using namespace std;

int main(){
    
    // Butter Fly Pattern !!

    cout<<"Butter Fly Pattern "<<endl;


    int n ;
    cout<<"Enter Your size of Pattern : ";
    cin>>n;

    char ch{'*'};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<'*';
        }

        for (int j = 0; j < 2*(n-i-1); j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < i+1; j++)
        {
            cout<<'*';
        }
        
        cout<<endl;
    }
    
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<'*';
        }

        for (int j = 0; j < 2*(n-i-1); j++)
        {
            cout<<" ";
        }
    
        for (int j = 0; j < i+1; j++)
        {
            cout<<'*';
        }
        
        cout<<endl;
    }
    


    return 0;
}