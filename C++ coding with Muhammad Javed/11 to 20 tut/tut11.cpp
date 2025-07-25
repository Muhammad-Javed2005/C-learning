#include<iostream>

using namespace std;

int main(){
    

    // Break statment in C++ ::
    /* In break statment if condition is ture so function exist their loop */ 

    for (size_t i = 1; i <= 40 ; i++)
    {
        cout<<i<<endl;

        if(i==10){

            break;
        }
    }


    // Continus Statment in C++:

    /* In Continue statment if condition is ture so function ingonre  this step and continue loop */


    
        for (size_t i = 1; i <= 40 ; i++)
    {
        cout<<i<<endl;

        if(i==10){

            continue;
        }
    }



    return 0;
}