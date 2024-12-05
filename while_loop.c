#include<stdio.h>

int main() {

    // while loop syntax

    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    // Print 1 to 5 using while loop
    int i = 1;
    while (i<=5)
    {
        printf("Hello world, ");
        i++;   // i++ means = {i = i + 1}
    }

    // Print the numbers from 0 to n, if n is given by user.
    int i = 0, n;
    printf("enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d, ", i);
        i++;
    }
    
    // Print how much digit in a number given by user 
    int n, r, c=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        r = n%10;
        n = n/10;
        c++;
    }
    printf("Digit is: %d", c);

    // Print how much even and odd digit in a number given by user
    int n, r, even=0, odd=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        r = n%10;
        n = n/10;
        if (r % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("Even is: %d, Odd is: %d", even, odd);

    // Print sum of a number given by user serially
    int n, r, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        r = n%10;
        n = n/10;
        sum = sum + r;    
    }
    printf("Sum is: %d", sum);

    // Print sum of even numbers in a number given by user serially
    int n, r, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        r = n%10;
        n = n/10;
        if (r%2==0)
        {
            sum = sum + r;
        }
           
    }
    printf("Sum is: %d", sum);


    // Perfect number


    // Pallindrome number


    // Armostrong number


    
    return 0;
}