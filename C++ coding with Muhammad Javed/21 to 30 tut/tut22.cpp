#include <iostream>
#include <string>
using namespace std;

class Binary {
    string s;

public:
    void read(void);
    void chk_binary(void);
    void ones_compliment(void);
    void display(void);
};

void Binary::read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

void Binary::chk_binary(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect Binary format" << endl;
            return;
        }
    }
    cout << "Correct Binary format" << endl;

}



void Binary :: ones_compliment(void){

    cout<<"Displaying Your Binary number"<<endl;
    for ( int i = 0; i < s.length() ; i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }    
    
    }

    cout<<endl;
}

void Binary ::display(){

    for ( int i = 0; i < s.length() ; i++)
    {
        cout<<s.at(i);
    }

    cout<<endl;
}


int main() {
    Binary b;
    b.read();
    b.chk_binary();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}


// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions