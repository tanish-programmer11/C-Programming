#include <stdio.h>

int main() {
    int n, i, f = 1;               // n = number, i = loop variable, f = factorial result

    printf("Enter a number: ");    // Ask the user to enter a number
    scanf("%d", &n);               // Read the input value

    for(i = 1; i <= n; i++)        // Loop runs from 1 to n
        f *= i;                    // Multiply f by i to calculate factorial

    printf("Factorial = %d", f);   // Print the factorial result
    return 0;                      // End of program
}