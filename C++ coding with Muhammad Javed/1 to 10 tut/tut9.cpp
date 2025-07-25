#include<iostream>

using namespace std;

int main()
{
    cout<<"This is tutorial 9"<<endl;

    int age ;
    cout<<"Tell me age : "<<endl;
    cin>>age;

    //Selection Control Structure : if else ladder 

    if ((age<18) && (age>1)){

        cout<<"Your age is not valid \n Try on next time !!!!! ";


    }

    else if(age>18){

        cout<<"Your age is valid \n You are able to come in group";

    }

    else {

        cout<<"You enter a invalid age \n You are mental....";
    }

    //Selection Control Structure : Switch case 

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
        
    case 22:
        cout<<"You are 22";
        break;

    case 9:
        cout<<"You are 9";
        break;

    case 56:
        cout<<"You are 55";
        break;
    
    default:

        cout<<"No special Cases!!!!!";
        break;
    }



    return 0;
}
