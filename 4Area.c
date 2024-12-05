#include<stdio.h> 
#include<math.h>

float areaSquare(float length);
float areaCircle(float radius);
float areaRectangle(float length1, float length2);

int main() {

    // Write a function to calculate the area of square, circle and a recatangle if number is given by user.

    float length, radius, length1, length2;
    length = 12;
    radius = 8;
    length1 = 20;
    length2 = 5;

    printf("Area of square: %.2f\n", areaSquare(length));
    printf("Area of circle: %.2f\n", areaCircle(radius));
    printf("Area of rectangle: %.2f", areaRectangle(length1, length2));
    return 0;
}


float areaSquare(float length) {
    return length*length;
}

float areaCircle(float radius) {
    return 3.1416 * pow(radius, 2);
}

float areaRectangle(float length1, float length2) {
    return length1*length2;
}