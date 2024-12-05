#include<stdio.h>

int main() {

    // Small to Big  
    //type-1 [Number right angle triangle.] 
    // Pattern 1

    // [at first we have to take row.]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)  //column is exactly equal to row.
        {
            printf("%d ", col);  //[columnwise print]
        }
        printf("\n");
    }

    //Pattern 2

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", row);  //[rowwise print]
        }
        printf("\n");
    }


    // Pattern 3  [Binary right angle triangle.]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col%2); //[odd= 1; even= 1 dhore - same as previous pattern] 
        }
        printf("\n");
    }

    // Pattern 4

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", row%2);  //[rowwise print]
        }
        printf("\n");
    }


    // Pattern 5 [Alphabetic right angle triangle.]

    // ASCII code for A = 65, a = 97 [we have to take one less number: for A we have to take 64]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", col + 64); //[col=1 --> then print 1+64= 65 which is A]
                                     //[col=2 --> then print 2+64= 66 which is B]
        }
        printf("\n");
    }

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", col + 96); //[col=1 --> then print 1+96= 97 which is a]
                                     //[col=2 --> then print 2+96= 98 which is b]
        }
        printf("\n");
    }

    // Pattern 6

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", row + 64); //[rowwise print]
        }
        printf("\n");
    }
    

    // Pattern 7

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("*");
            printf("#");
        }
        printf("\n");
    }


    // Big to Small 
    // Type-2
    // Pattern 8

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)  // 1 theke shuru hoye row er songkha porjonto cholbe.
        {
            printf("%d", col);
        }
        printf("\n");
    }



    //Mixing pattern 1 & pattern 8
    // Type-3
    // pattern 9 [Triangle of number]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row-1; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    // pattern 10

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }

    for (int row = n-1; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }


    // pattern 11 [Triangle of alphaber mixing]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row-1; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }


    // pattern 12 [Triangle of binary mixing]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col%2);
        }
        printf("\n");
    }

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row-1; col++)
        {
            printf("%d ", col%2);
        }
        printf("\n");
    }


    // pattern 13 [Triangle of character mixing]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("# ");
        }
        printf("\n");
    }

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row-1; col++)
        {
            printf("# ");
        }
        printf("\n");
    }


    // Type-4
    // pattern 14 [left triangle with space] --> (n-row = space boxes)

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        // printing space
        for (int col = 1; col <= n-row; col++) //(if row is 1, n is 3 then space= n-1= 2)
        {
            printf(" ");
        }

        // printing number
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        
        printf("\n");
    }


    // pattern 15 [left triangle with space of alphabet]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        // printing space
        for (int col = 1; col <= n-row; col++)
        {
            printf(" ");
        }

        // printing alphabet
        for (int col = 1; col <= row; col++)
        {
            printf("%c", col+64);
        }
        
        printf("\n");
    }


    // pattern 16 [left triangle with space of binary]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        // printing space
        for (int col = 1; col <= n-row; col++)
        {
            printf(" ");
        }

        // printing number
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col%2);
        }
        
        printf("\n");
    }


    // pattern 17 [left triangle with space of character]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        // printing space
        for (int col = 1; col <= n-row; col++)
        {
            printf(" ");
        }

        // printing number
        for (int col = 1; col <= row; col++)
        {
            printf("#");
        }
        
        printf("\n");
    }



    // Type-5
    // pattern 18 [big to small with space]

    int n, row, col; 
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= n-row; col++) //(if n=5 then row is 5--> space=5-5=0)
        {
            printf(" ");
        }

        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }


    // Type-6
    // pattern 19[pyramid 1]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        // print space
        for (int col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        // printing stars 
        for (int col = 1; col <= 2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
        
    }


    // pattern 20[pyramid 2 - reverse pyramid]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = n; row >= 1; row--)
    {
        // print space
        for (int col = 1; col <= n-row; col++)
        {
            printf("  ");
        }
        // printing stars 
        for (int col = 1; col <= 2*row-1; col++)
        {
            printf("# ");
        }
        printf("\n");
        
    }


    // pattern 21[pyramid 3 - combine uper to down and down to upper]

    int n, row, col;
    printf("Enter row: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        // print space
        for (int col = 1; col <= n-row; col++)
        {
            printf("  ");
        }
        // printing stars 
        for (int col = 1; col <= 2*row-1; col++)
        {
            printf("# ");
        }
        printf("\n");
        
    }

    for (int row = n-1; row >= 1; row--)
    {
        // print space
        for (int col = 1; col <= n-row; col++)
        {
            printf("  ");
        }
        // printing stars 
        for (int col = 1; col <= 2*row-1; col++)
        {
            printf("# ");
        }
        printf("\n");
        
    }


    // pattern 22[Rectangle star pattern]

    int n, row, col;
    printf("Enter a number: ");
    scanf("%d", &n);

      for (int row = 1; row <= n; row++)
      {
            for (int col = 1; col <= n; col++)
            {
                //inside inner loop print star for first and last row or first and last column.
                if (row == 1 || row==n || col==1 || col==n)
                {
                    printf("*");
                }
                else
                    printf(" ");
                
            }
            printf("\n");
      }
    return 0;
}