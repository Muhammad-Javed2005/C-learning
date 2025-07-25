#include<iostream>

using namespace std;

int main()
{
    /* Loop in C++
    There are three loop in C++:
        1. For loop 
        2. While loop 
        3. Do-while loop
    */ 



    /*Syntax For loop in C++
    
    for (initialization , condition , updation)
    {
        Loop body (C++ code)

    }
     */

    // For Loop in C++:

    for (size_t i = 1; i <= 40 ; i++)
    {
        cout<<i<<endl;
    }
        

    // Example of infinte For Loop in C++:

    for (size_t i = 1; 34 <= 40 ; i++)
    {
        cout<<i<<endl;
    }






    // Syntax for While Loop in C++:

    /*
    while (Condition)
    {
        C++ Statment 
        Incremenet     
    
    }
     */ 
    // While Loop in C++:

    int i = 1;
    while (i<=40){
    
        cout<<i<<endl;
        i++;
    }


    //Example of infinte While Loop in C++:

    int i = 1;
    while (true){
    
        cout<<i<<endl;
        i++;
    }




    /*Syntax of Do-whiel Loop in C++:
    do
    {
    
        C++ Statment 

    } while (condition);
    
    
     */

    // Do-while loop in C++:

    int i = 1;
    do 
    {
        cout<<i<<endl;
        i++;
    } while (i<=40);

    // Exmaple of Infinte Do- While Loop  in C++:

    int i = 1;
    do 
    {
        cout<<i<<endl;
        i++;
    } while (true);


    return 0;
}
