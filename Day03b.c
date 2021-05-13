//Write a C Program to convert Fahrenheit to Celsius.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float F=0,C=0;
scanf("%f",&F);    
C = ((F-32)*5)/9;
printf("%.2f",C);
return (0);
}


