#include<stdio.h>

int main() {
     
     int a[100], n, max;
     printf("Enter array size: ");
     scanf("%d", &n);

     printf("Enter elements: ");
     for (int i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     
     for (int i = 0; i < n; i++)
     {
          if (a[i] > max)
          {
               max = a[i];
          }  
     }
     
     printf("Maximum number is: %d", max);
     return 0;
}