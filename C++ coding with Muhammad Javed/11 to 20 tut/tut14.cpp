#include <iostream>

// 

struct employee {
    long long Id;
    char favChar;
    int salary;
};

int main() {
    struct employee jiya;

    // Assigning values to the structure fields
    jiya.Id = 4240109627843LL; // Use LL for long long literal
    jiya.favChar = 'j';        // Use single quotes for character
    jiya.salary = 120000;

    // Printing the structure data
    printf("Employee ID: %lld\n", jiya.Id);
    printf("Favorite Character: %c\n", jiya.favChar);
    printf("Salary: %d\n", jiya.salary);

    return 0;
}
