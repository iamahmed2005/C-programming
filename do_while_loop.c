#include <stdio.h>

int main() {

    // Syntax:
    // do
    // {
    //     /* code */
    // } while (/* condition */);
    

    // That while loop which works only one time always

    // Print 1 to 5
    int i = 1;
    do
    {
        printf("%d, ", i);
        i++;
    } while (i <= 5);
    
    // Print 5 to 1
    int i = 5;
    do
    {
        printf("%d, ", i);
        i--;
    } while (i >= 1);

    
    // Break statement(End the loop)


    // Keep taking numbers as input from user untill user enters and odd number

    int n;
   do
   {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 2 != 0)
        {
            break;
        }
        
   } while (1);  //here 1 means the condition is always true.
   printf("Thanks");
   
    // Keep taking numbers as input from user untill user enters a number which is multiple of 7.

   int n;
    do
    {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 7 == 0)
        {
            break;
        }
        
    } while (1);
    printf("Thanks");


    //Continue statement(skip to next iteration)

    
    return 0;
}
