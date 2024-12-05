#include<stdio.h> 

void australia() {
    printf("You are australia.\n");
    return;
}

void india() {
    printf("You are india.\n");
    australia();
    return;  // here the does not finish because before return we have called another function.
}

void bangladesh() {
    printf("You are a bangladeshi.\n");
    india();
    return;  // here the does not finish because before return we have called another function.
}
 
int main() {
    bangladesh();
   return 0;
}