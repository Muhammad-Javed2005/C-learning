#include<iostream>

using namespace std ;

int main()
{
    int n;
    cout<<"Enter your table number "<<endl;
    cin>>n;


    
    int i = 1  ;
    while(i<=10)

    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
        i++;
    }



    for (size_t i = 0; i <=10; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    




    return 0;
}
