#include<stdio.h>

int factorial(int n) {
     int fact = 1;
     for (int i = 1; i <= n; i++)
     {
          fact = fact * i;
     }
     return fact;
}

int main() {

     int a, r;
     printf("Enter a number: ");
     scanf("%d", &a);

     printf("Factorial is: %d", factorial(a));


     return 0;
}