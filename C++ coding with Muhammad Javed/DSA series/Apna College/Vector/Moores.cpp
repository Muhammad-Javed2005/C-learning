#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int MajorityElement(vector<int> num)
{
    int freq = 0;
    int ans = 0;
    int n = num.size();
    

    for (int i = 1; i < n; i++)
    {
        if (freq == 0)
        {
            ans = num[i];
        }
        if(ans == num[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
     return ans;
}

int main()
{

    vector<int> num = {1, 2, 2, 1, 1, 1};

    int ans = MajorityElement(num);

    cout << "Majority Element in array is " << ans << endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}