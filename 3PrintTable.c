#include <stdio.h>

void printTable(int n);

int main() {

    // write a function to print the table(নামতা) of a number.

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printTable(n);  //n = argument / actual parameter

    return 0;
}

void printTable(int n) {   //n = parameter / formal parameter
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i*n);
    }
    
}