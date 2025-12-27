#include <stdio.h>      // For printf and scanf
#include <string.h>     // For strlen function

int main () {
    char str[100];      // String to store input
    int len, i;         // Variables for length and loop

    printf("enter number");  
    scanf("%s", str);   // Read number as string

    len = strlen(str);  // Calculate string length

    for (i = 0; i < len / 2; i++) {      // Loop till middle of string
        if (str[i] != str[len - 1 - i]) { // Compare characters
            printf("not palindrome");    // Not palindrome
            return 0;                    // Exit program
        }
    }

    printf("Palindrome"); // If all characters match

    return 0;            // End program
}