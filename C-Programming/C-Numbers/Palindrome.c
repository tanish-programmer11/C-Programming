#include <stdio.h>    // Header file for input-output functions
#include <string.h>   // Header file for string handling functions like strlen

int main () {
    char str[100];    // Array to store the input number as a string
    int len, i;       // Variables for length of string and loop counter

    printf("enter number");  
    scanf("%s", str);        // Take number input in string format

    len = strlen(str);       // Find the length of the input string

    // Loop to check characters from start and end
    for (i = 0; i < len / 2; i++) {
        // Compare characters from beginning and end
        if (str[i] != str[len - 1 - i]) {
            printf("not palindrome");  // If mismatch found
            return 0;                  // Exit the program
        }
    }

    printf("Palindrome");   // If no mismatch found, it is a palindrome

    return 0;               // End of program
}