#include<stdio.h>

int main() {
     
     int a[100], n, key, pos, flag = 0;
     printf("Enter array size: ");
     scanf("%d", &n);

     printf("Enter elements: ");
     for (int i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     
     printf("Enter a number to search: ");
     scanf("%d", &key);

     for (int i = 0; i < n; i++)
     {
          if (a[i] == key)
          {
               pos = i;
               flag = 1;
          }     
     }
     
     if (flag = 1)
     {
          printf("Your number is found at [%d] location.", pos);
     }
     
     else
          printf("Number not found");
     return 0;
}