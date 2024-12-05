#include<stdio.h>

int main() {
     
     int n, r, t, rev = 0;
     printf("Enter a number: ");
     scanf("%d", &n);
     t = n;

     while (n != 0)
     {
          r = n % 10;
          rev = rev*10 + r;
          n = n / 10;
     }
     if (t == rev)
     {
          printf("%d is a pallindrome.", rev);
     }
     else
          printf("%d is not a pallindrome.", rev);


     return 0;
}