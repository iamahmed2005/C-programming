#include<stdio.h>

int main() {
     
     int n, p = 0;
     printf("Enter a number: ");
     scanf("%d", &n);

     for (int i = 2; i < n; i++)
     {
          if (n%i == 0)
          {
               p = 1;
          }
     }
     if (p == 0)
     {
          printf("%d is a Prime number.", n);
     }
     else
          printf("%d is not a Prime number.", n);

     return 0;
}