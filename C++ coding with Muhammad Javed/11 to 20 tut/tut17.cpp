#include<iostream>

using namespace std;

// Inline Function in C++:

// inline int product(int a , int b){
//     return a*b;
// }

// Static variable in C++:

int product(int a , int b){
    
    static int c = 0;
    c = c+1;
    return a*b+c;

}

    // Default Arugument :

float moneyRecieved(int currentMoney , float factor = 1.04)
{
    return currentMoney * factor;
} 


int main(){

    int a , b;
    cout<<"Enter value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;


    int money;
    cout<<"Enter your amount have an current :"<<endl;
    cin>>money;
    cout<<"If you have "<<money<<" Rs in your Bank account , You will recive "<<moneyRecieved(money)<<" Rs after 1 years"<<endl;

    /* In this code only one parameter pass and other is by default take formal parameter*/ 

    cout<<" For VIP :If you have "<<money<<" Rs in your Bank account , You will recive "<<moneyRecieved(money , 1.1)<<" Rs after 1 years"<<endl;


    /* in this code both parameter is pass actual parameter is pass so formal parameter in ignore*/ 




    return 0;
}