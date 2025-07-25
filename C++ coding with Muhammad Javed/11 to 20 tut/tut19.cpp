#include<iostream>

using namespace std;

// Sum of two argument:

int sum(int a , int b){
    
    cout<<"Using Function with 2 arguments "<<endl;
    return a+b;

}

// Sum of three argument :


int sum (int a , int b , int c ){

    cout<<"Using Function with 3 arguments "<<endl;
    return a+b+c;

}

// Calculate the volume of a cylinder :

int volume(double r , int h){

    return (3.142*r*r*h);

}

// Calculate the volume of cube :

int volume (int a ){

    return (a*a*a);

}

// Calculate the volume of Rectangular:

int volume (int l , int b , int h){

    return (l*b*h);
}




int main(){

    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 and 7 is "<<sum(3,6,7)<<endl;
    cout<<"The volume of cubiod of 3 , 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder of radius is 7 and height is 9  "<<volume(7,9)<<endl;
    cout<<"The volume of cube of side is 3 "<<volume(3)<<endl;




    return 0;
}