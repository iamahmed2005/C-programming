#include<stdio.h>

int main() {
     
     int row, col, n, z =1;
     printf("Enter a row: ");
     scanf("%d", &n);

     for (int row = 1; row <= n; row++)
     {
          for (int col = 1; col <= row; col++)
          {
               printf("%d ", z++);
          }
          printf("\n");
     }
     return 0;
}