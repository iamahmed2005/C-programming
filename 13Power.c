#include<stdio.h>

int P(int x, int y) {
     if (x == 1)
     {
          return 1;
     }
     else if (y == 0)
     {
          return 1;
     }
     else
          return x * P(x, y-1);
}

int main() {

     int a, b, r;
     printf("Enter x: ");
     scanf("%d", &a);
     printf("Enter y: ");
     scanf("%d", &b);

     r = P(a, b);
     printf("%d to the power %d is: %d", a, b, r);

     return 0;
}