//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int I,r,b,h;
    scanf("%d", &I);
    printf("%d\n",I*I);
    scanf("%d",&r);
    printf("%.1f\n",3.14*r*r);
    scanf("%d",&b);
    scanf("%d\n",&h);
    printf("%.2f",0.5*b*h);
    return (0);
} 









