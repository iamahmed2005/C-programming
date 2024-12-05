#include<stdio.h>

int main() {

   // For loop syxtax:

   // for(initialisation; condition; updation) {

   //     // do something
   // }

   // {i = iterator; counter}

   // Print hello for 20 times 
    for ( int i = 1; i <= 20; i = i + 1) // i+1: i++
   {
    printf("Hello World \n");
   }

   // Print 1 to 100
    for (int i = 1; i <= 100; i = i + 1)
     {
        printf("%d, ", i);
     }

   // Print 10 to 1
    for (int i = 10; i >= 1; i = i - 1) // i-1: i--
     {
        printf("%d, ", i);
     }

   // Print the numbers from 0 to n, if n is given by user.
   int n;
    printf("enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", i);
    }

   // Print the Sum of first n Natural Numbers:

   int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)                                                                                                                                                
    {
        sum = sum + i;   //i=1 --> sum=0 --> loop: sum = sum+i = 0+1 = 1
                         //i=2 --> sum=1 --> loop: sum = sum+i = 1+2 = 3
                         //i=3 --> sum=3 --> loop: sum = sum+i = 3+3 = 6
                         //i=4 --> sum=6 --> loop: sum = sum+i = 6+4 = 10
    }

    printf("Sum is: %d", sum);
    
   // Also print them in reverse
   for (int i = n; i >=1; i--)
    {
        printf("%d, ", i);
    }

   // Use multiple variables in single for loop of previous problem
   int sum = 0;
    for (int i = 1, j = n; i <= n && j>=1; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("Sum is: %d\n", sum);

                  // OR 

   int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int j = n; j>=1; j--)
    {
        sum = sum + j;
        printf("%d, ", j);
    }
    printf("Sum is: %d\n", sum);
    

   // Print the table(নামতা) of a  number input by the user.

   int n;
   printf("Enter a number: ");
   scanf("%d", &n);

   for (int i = 1; i <= 10; i++)
   {
        printf("%d, ", i*n);
   }
   
   // Print the reverse table(নামতা) of a  number input by the user.

   int n;
   printf("Enter a number: ");
   scanf("%d", &n);

   for (int i = 10; i >= 1; i--)
   {
     printf("%d, ", i*n);
   }

    // Fibonacci sereies

    int a, b, c, n;
   a = 0; 
   b = 1;
   scanf("%d", &n);
    printf("%d,%d,", a,b);
   for (int i = 1; i <= n; i++)
   {
        c = a+b;
        a = b;
        b = c;
        printf("%d,", c);
   } 

   // Increment Operator
   // 1. ++i[Pre] 2. i++[Post]

     int i =1;
    printf("%d", i++);
    printf("%d", i);

   //  Decrement Operator
   // 1. --i[Pre] 2. i--[Post]


   // Loop counter / iterator can be float or character

   for (float i = 1.0; i <= 10.0; i++)
   {
      printf("%.3f, ", i);
   }
   
   for (char i = 'A'; i <= 'Z'; i++)
   {
    printf("%c, ", i);
   }


   // Infinite loops {We should not use this at all.}

   for (int i = 1; ; i++)
   {
    printf("Hello world");
   }


   // Break statement(End the loop)

   for (int i = 1; i <= 10; i++)
   {
        if(i==7) {
            break;
        }
        printf("%d, ", i);
   }
   printf("End");


   //Continue statement(skip to next iteration)

   for (int i = 1; i <= 10; i++)
    {
        if (i == 5)  //skip 5
        {
            continue;
        }
        
        printf("%d, ", i);
    }

   
   // Print all the odd numbers from 5 to 50
   int n;
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        
        printf("%d \n", i);
    }

   
    // Calculate the sum of all numbers between 5 and 50(including 5 & 50)
   
    int sum = 0;
   for (int i = 5; i <= 50; i++)
   {
        sum = sum + i;
   }
   printf("Sum is: %d",  sum);

    // Print the factorial number of n 
    
    int n;
   printf("Enter a number: ");
   scanf("%d", &n);
                            //we can not use big numbers in int for factorial.
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }        
    printf("%d", fact); 
   


    // Nested Loop {Print a pattern}

    for (int i = 0; i <= 3; i++)  //Outer loop
    {
        for (int j = 0; j <= 4; j++)  //Inner loop
        {
            printf("*");
        }
        printf("\n");   // Move to the next line after inner loop   
    }



    // Perfect number
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        
    }
    if (sum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a perfect Number");
    }
    

    // Pallindrome number
    int n, r, rev = 0, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;

    while (n != 0)
    {
        r = n % 10;
        rev = rev*10+r;
        n = n/10;
    }
    if (t == rev)
    {
        printf("Pallindrum number");
    }
    else{
        printf("Not a pallindrum number");
    }


    // Prime Number
    int n, i, p = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 1;  // ekhane dhukle prime hobe na..
        }
        
    }
    
    if (p == 0)
    {
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }


    // Armostrong number

// Each line contains two stars, and there are three lines in total because the outer loop ran three times.
// Summary
// 1)The outer loop controls how many lines you get.
// 2)The inner loop controls how many stars are printed on each line.




    return 0;
}