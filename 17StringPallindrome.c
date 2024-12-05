#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, isPal = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str); // Find the length of the string

    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    
    rev[len] = '\0'; // Add the null terminator

    // Check string is a palindrome
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            isPal = 0;
            break;
        }
    }

    if (isPal)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
