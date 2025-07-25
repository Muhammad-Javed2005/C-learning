#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter Your Number: ";
    cin >> n;

    // Handle edge cases
    if (n <= 1) {
        cout << "The number " << n << " is not a prime number." << endl;
        return 0;
    }

    // Loop to check divisibility
    for (int i = 2; i * i <= n; i++) {  // Optimized to check only up to sqrt(n)
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    // Print result
    if (isPrime)
        cout << "The number " << n << " is a prime number." << endl;
    else
        cout << "The number " << n << " is not a prime number." << endl;

    return 0;
}
