#include<iostream>

#include<string>

using namespace std;

int main(){
    int n;
    int fact = 1;
    cout << "Enter Your Number: ";
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        fact *= i;
    }
    cout<<"The Factorial of "<<n<<" is "<<fact<<endl;

    return 0;
}