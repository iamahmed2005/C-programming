#include <stdio.h>

int sum(int a, int b);

int main() {

    // make a function to sum two values 

    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b); 
    
    int s = sum(a, b);
    printf("Sum is: %d", s);

    return 0;
}

int sum(int a, int b) {   // Here int is a return type.
    return a+b;
}