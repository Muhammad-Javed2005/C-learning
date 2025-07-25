// Write a function to check if a number is prime or not 


#include <iostream>
#include <cmath>  // For sqrt()

using namespace std;

bool isPrime(int n) {
    if (n <= 1)  // Handle cases where n is 0, 1, or negative
        return false;
    if (n <= 3)  // 2 and 3 are prime numbers
        return true;
    
    if (n % 2 == 0 || n % 3 == 0)  // Eliminate even numbers and multiples of 3 early
        return false;

    for (int i = 5; i * i <= n; i += 2) { // Check divisibility from 5 onwards (odd numbers only)
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    int n;
    cout << "Enter Your Number: ";
    cin >> n;

    if (isPrime(n))
        cout << "Your number \"" << n << "\" is a prime number." << endl;
    else
        cout << "Your number \"" << n << "\" is not a prime number." << endl;


        cout<<"This program is formed by \"Engineer Muhammad Javed\""<<endl;
    return 0;
}
