#include <iostream>

#include <string>

using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &x, c2 &y);

public:
    void inData(int a)
    {
        val1 = a;
    }
    void Display(void)
    {
        cout << val1;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &x, c2 &y);

public:
    void inData(int a)
    {
        val2 = a;
    }
    void Display(void)
    {
        cout << val2;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
};

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(56);
    oc2.inData(23);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes : ";
    oc1.Display();
    cout << endl;
    cout << "The value of c2 after exchanging becomes : ";
    oc2.Display();
    cout << endl;

    return 0;
}


