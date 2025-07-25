#include<iostream>

#include<string>

using namespace std;

int main(){
    
    int n ;
    cout<<"Enter your Number : ";
    cin>>n;
    int odd_Sum = 0;
    int even_Sum = 0;
    int tot_Sum = 0;

    for ( int i = 0; i <=n; i++)
    {
        tot_Sum+=i;

        if(i%2 == 0)
        {
            even_Sum += i;
        }
        else if (i%2 != 0)
        {
            odd_Sum += i;
        }
    
    
    }
    

    cout<<"The sum of first "<<n<< " natural number is : "<<tot_Sum<<endl;
    cout<<"The sum of first "<<n<< " natural even number is : "<<even_Sum<<endl;
    cout<<"The sum of first "<<n<< " natural odd number is : "<<odd_Sum<<endl;


    return 0;
}