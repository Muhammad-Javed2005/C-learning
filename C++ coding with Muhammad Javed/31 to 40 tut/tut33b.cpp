#include <iostream>
#include <string>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate; // Corrected to float for consistent handling
    float returnValue;

public:
    BankDeposit() {}                    // Default constructor
    BankDeposit(int p, int y, int r);   // Interest rate as a percentage (int)
    BankDeposit(int p, int y, float r); // Interest rate as a decimal (float)

    void show();
};

// Constructor for interest rate in decimal (e.g., 0.05 for 5%)
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

// Constructor for interest rate in percentage (e.g., 5 for 5%)
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100; // Convert percentage to decimal
    returnValue = principal;

    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Your principal amount deposited in the bank is " << principal << ".\n";
    cout << "Bank returns after " << years << " years with interest: " << returnValue << endl;
}

int main()
{
    BankDeposit B1, B2;

    int p, y, R;
    float r;

    cout << "Enter your principal value: ";
    cin >> p;
    cout << "Enter number of years of investment: ";
    cin >> y;
    cout << "Enter your interest rate (decimal, e.g., 0.05 for 5%): ";
    cin >> r;

    B1 = BankDeposit(p, y, r);
    B1.show();

    cout << "Enter your principal value: ";
    cin >> p;
    cout << "Enter number of years of investment: ";
    cin >> y;
    cout << "Enter your interest rate (percentage, e.g., 5 for 5%): ";
    cin >> R;

    B2 = BankDeposit(p, y, R);
    B2.show();

    return 0;

    
}
