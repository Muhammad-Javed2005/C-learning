#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int MajorityElement(vector<int> num)
{
    int freq = 1;
    int ans = num[0];
    int n = num.size();
    sort(num.begin(), num.end());

    for (int i = 1; i < n; i++)
    {
        if (num[i] == num[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = num[i];
        }

        if (freq > n / 2)
        {
            return ans;
        }
    }
}

int main()
{

    vector<int> num = {1, 2, 2, 1, 1, 1};

    int ans = MajorityElement(num);

    cout << "Majority Element in array is " << ans << endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}