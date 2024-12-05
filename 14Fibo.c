#include<stdio.h>

int fibo(int x) {
     if (x == 1)
     {
          return 1;
     }
     else if(x == 0)
          return 0;
     else
          return fibo(x-1) + fibo(x-2);
}
int main() {

     int a, r;
     printf("Enter number: ");
     scanf("%d", &a);

     for (int i = 0; i < a; i++)
     {
          printf("%d ", fibo(i));
     }
     

     return 0;
}