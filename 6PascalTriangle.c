#include<stdio.h> 

int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact; 
}

int combination(int n, int r) {   // n = row; r = col hoye jabe.
    int nCr = factorial(n) / (factorial(r) * factorial(n-r));
    return nCr;
}

/* Pascle Triangle. it is mainly related to nCr. But in this we assume that n is row and r is column. 
            it means iCj */

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int row = 0; row <= n; row++)
    {
        // Printing space
        for (int col = 0; col <= n-row; col++)
        {
            printf(" ");
        }
        // Printing values 
        for (int col = 0; col <= row; col++)
        {
            printf("%d ", combination(row, col));
        }
        printf("\n");
    }
   return 0;
}
