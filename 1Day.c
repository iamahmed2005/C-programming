#include<stdio.h>

int main() {
     
     int day, month, year;
     printf("Enter a day: ");
     scanf("%d", &day);

     year = day / 365;
     day = day % 365;
     month = day / 30;
     day = day % 30;
     printf("Year= %d, Month = %d, Day = %d", year, month, day);

     
     return 0;
}