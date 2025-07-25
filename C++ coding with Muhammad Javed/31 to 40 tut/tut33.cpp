#include <iostream>

#include <string>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, float r);
    
    void show(); 
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1 + interestRate);
    }
}

void BankDeposit :: show()
{

    cout << " Your Principal amount deposit in bank is " << principal << ".\nBank return after " << years << "  years with interest is " << returnValue << endl;
};

int main()
{

    BankDeposit B1 , B2 , B3;

    int p, y, R;
    float r;

    cout << "Enter your principal  value : ";
    cin >> p;
    cout << endl;
    cout << "Enter of years of investment : ";
    cin >> y;
    cout << endl;
    cout << "Enter your interest rate : ";
    cin >> r;
    cout << endl;
    B1 = BankDeposit(p, y, r);
    B1.show();

    cout << "Enter your principal  value : ";
    cin >> p;
    cout << endl;
    cout << "Enter of years of investment : ";
    cin >> y;
    cout << endl;
    cout << "Enter your interest rate : ";
    cin >> R;
    cout << endl;
    B2 = BankDeposit(p, y, R);
    B2.show();

    return 0;
}