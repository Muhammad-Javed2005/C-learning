#include<iostream>

#include<string>

using namespace std;

int main(){

    int n;
    int sum =0;
    cout << "Enter Your Number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if(i%3 == 0)
        {
            sum+=i;
        }
    }
    
    cout<<"The sum of first "<<n<<" natural number which are divisible by 3 is "<<sum<<endl;
    return 0;
}