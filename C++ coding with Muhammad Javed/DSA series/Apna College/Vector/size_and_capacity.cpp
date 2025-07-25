#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    
    vector<int>vec;

    vec.push_back(98);
    vec.push_back(36);
    vec.push_back(56);

    cout<<"Size is "<<vec.size()<<endl;
    cout<<"Capacity is "<<vec.capacity()<<endl;


    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}