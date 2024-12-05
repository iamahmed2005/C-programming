#include<stdio.h>

int fact(int n) {
     if (n == 0 || n==1)
     {
          return 1;
     }
     else
          return n * fact(n-1);
}

int main() {

     int a, r;
     printf("Enter a number: ");
     scanf("%d", &a);

     r = fact(a);
     printf("Factorial of %d is: %d", a, r);

     return 0;
}