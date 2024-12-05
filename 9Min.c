#include<stdio.h>

int main() {
     
     int a[100], n, min;
     printf("Enter array size: ");
     scanf("%d", &n);

     printf("Enter elements: ");
     for (int i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     
     for (int i = 0; i < n; i++)
     {
          if (a[i] < min)
          {
               min = a[i];
          }  
     }
     
     printf("Minimum number is: %d", min);
     return 0;
}