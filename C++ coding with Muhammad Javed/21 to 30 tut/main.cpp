#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int x1, x2, y1, y2;

    cout << "Enter the value of x1: ";
    cin >> x1;
    cout << "Enter the value of y1: ";
    cin >> y1;
    cout << "Enter the value of x2: ";
    cin >> x2;
    cout << "Enter the value of :y2 ";
    cin >> y2;

    cout << "The point 1 is (" << x1 << ", " << y1 << ")" << endl;
    cout << "The point 2 is (" << x2 << ", " << y2 << ")" << endl;

    double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout << "The distance between point" << "(" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << dist << endl;

    return 0;
}