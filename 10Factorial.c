#include<stdio.h>

int fact(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

    // Factorial number of n 
int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d", n, fact(n));
    return 0;
}