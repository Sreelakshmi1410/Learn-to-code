//Write a C program to swap the values of two variables.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double num1, num2, temp;
 
    scanf("%lf", &num1);

    scanf("%lf",&num2);

 
    printf("a=%.lf b=%.lf\n", num1, num2);
 
    temp = num1;


    num1 = num2;
    num2 = temp;
    printf("a=%.lf b=%.lf", num1, num2);

    return 0;
}
