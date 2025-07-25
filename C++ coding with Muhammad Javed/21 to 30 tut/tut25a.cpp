#include <iostream>
#include <string>
using namespace std;

class Employee {
    int ID;
    int salary;
    string name;

public:
    void setData(void) {
        cout << "Enter your name: ";
        cin.ignore(); // Clear any leftover newline in the input buffer
        getline(cin, name); // Use getline to allow spaces in the name
        cout << "Enter your ID: ";
        cin >> ID;
        cout << "Enter your salary: ";
        cin >> salary;
    }

    void getData(void) {
        cout << "Hello " << name << "!\n\tYour ID number is: " << ID
             << "\n\tYour Salary is: " << salary << endl;
    }
};

int main() {
    Employee Hub[5];
    for (int i = 0; i < 5; i++) {
        Hub[i].setData();
        Hub[i].getData();
    }

    return 0;
}
