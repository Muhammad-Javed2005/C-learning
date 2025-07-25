#include<iostream>

using namespace std;
void g();

int sum(int a , int b){

    int c = a + b;
    return c;

}

int main(){
    
    int num1 , num2 ;
    printf("Enter number 1 :");
    cin>>num1;
    printf("Enter number 2 :");
    cin>>num2;
    printf("The sum is %i\n",sum(num1 ,num2));
    g();
    
    return 0;
}

void g(){

    printf("Hello , Good Morning !!!!!");


}