#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<int > vec = {1 , 2 , 3} ;
    cout<<vec[0]<<endl;       

    vector<int> veec (4 , 0);
    cout<<veec[0]<<endl;
    cout<<veec[1]<<endl;
    cout<<veec[2]<<endl;
    cout<<veec[3]<<endl;

    vector<char> character = {'a', 'b' , 'c' , 'd'};
    for(char val : character)
    {
        cout<<val<<endl;
    }
    

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}