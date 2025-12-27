#include <stdio.h>   // Header file for input-output functions like printf and scanf

int main() {          // Main function where program execution starts
    int n;            // Variable to store the input number

    printf("Enter a number:");   // Ask the user to enter a number
    scanf("%d", &n);             // Read the number entered by the user

    // Check whether the number is even or odd
    if (n % 2 == 0)              // If remainder is 0 when divided by 2
        printf("Even");          // Then the number is even
    else                         // Otherwise
        printf("Odd");           // The number is odd

    return 0;                    // End of program
}