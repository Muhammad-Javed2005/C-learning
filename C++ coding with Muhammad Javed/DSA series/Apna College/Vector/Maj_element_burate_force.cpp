#include<iostream>
#include<vector>
#include<string>

using namespace std;

int majorityElement(vector<int>num)

{   
    int n = num.size();
    for(int val : num)
    {
        int freq = 0;
        for(int el : num)
        {
            if(val == el)
            freq++;
        }
        if (freq>n/2)
        {
            return val;
        }
    }
}


int main(){
    

    vector<int>num = { 1, 2, 2,  1, 1, 1};

    int ans = majorityElement(num);

    cout<<"Majority Element in array is "<<ans<<endl;


    cout << "This program is developed by Engineer Muhammad Javed";

    return 0;
}