#include<stdio.h>

void fibo(int x) {
    int t, n, a, b;
    a = 0;
    b = 1;
    printf("%d %d ", a, b);
    for (int i = 1; i < x; i++)
    {
        t = a + b;
        printf("%d ", t);
        a = b;
        b = t;
    }
    printf("\n");
}

int main() {

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Enter a number greater than or equal to 2.\n");
    }
    else
        fibo(n);
    

    return 0;
}