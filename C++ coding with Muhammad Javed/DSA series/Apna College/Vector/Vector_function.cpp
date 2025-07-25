#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<int> num = {1, 2, 3, 4, 5};
    for (int val : num)
    {
        cout << val << endl;
    }

    // 1.) Size

    cout << "size = " << num.size() << endl;

    for (int val : num)
    {
        cout << val << endl;
    }
    // 2.) Push - back

    num.push_back(34);
    num.push_back(98);
    num.push_back(30);
    cout << "size after push back = " << num.size() << endl;
    for (int val : num)
    {
        cout << val << endl;
    }

    // 3.) Pop - back

    num.pop_back();
    cout << "size after pop back = " << num.size() << endl;

    for (int val : num)
    {
        cout << val << endl;
    }

    // 4.) Front

    cout << num.front() << endl;

    // 4.) Back

    cout << num.back() << endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}