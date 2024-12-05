#include<stdio.h>
#include<string.h>

int main() {

     char s[10];
     int i;

     printf("Enter a name: ");
     gets(s);  //take input 

     //convert lowercase to uppercase
     for (int i = 0; s[i] != '\0'; i++)
     {
          s[i] = s[i] - 32;
     }
     
     puts(s);

     return 0;
}