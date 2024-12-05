#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

        // nPr = n! / (n-r)! 

int main(){

    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    printf("nPr is: %d", factorial(n) / factorial(n-r));

}