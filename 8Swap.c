#include<stdio.h>

void swap(int x, int y) {
    int t;
    t = x;
    x = y;
    y = t;
    printf("After swawpping: a = %d, b = %d \n", x, y);  // This is called call by Value. and it will not return something.
}


// We can swap 2 numbers without using a third variable
void swap2(int c, int d) {
    
    c = c + d;
    d = c - d;
    c = c - d;
    printf("After swawpping: m = %d, n = %d", c, d);
}
int main() {

    // Declaring a third variable
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swawpping: a = %d, b = %d \n", a, b);
    swap(a, b);

    // ----------------------------------------------------------//

    // Without declaring a third variable
    int m, n;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Before swawpping: m = %d, n = %d \n", m, n);
    swap2(m, n);
    return 0;
}