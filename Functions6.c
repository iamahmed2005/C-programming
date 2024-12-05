#include<stdio.h> 

void calculatePrice(float value);

int main() {

    // Changes to parameters in function dont change the values in calling function.

    float value = 50;
    calculatePrice(value);
    printf("Value is: %f\n", value);

    return 0;
}

void calculatePrice(float value) {    //parameter
    value = value + (value * 18)/100;
    printf("New value is: %f\n", value);
}