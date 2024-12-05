#include<stdio.h>

int main() {

     int a[10][10], b[10][10], c[10][10], n;
     
     // input for a
     printf("Enter matrix A: ");
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               scanf("%d", &a[i][j]);
          }       
     }

     // input for b
     printf("Enter matrix B: ");
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               scanf("%d", &b[i][j]);
          }       
     }

     // sum part
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               c[i][j] = a[i][j] + b[i][j];
          }       
     }

     // Print sum 
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               printf("%d ", c[i][j]);
          }       
     }
     return 0;
}