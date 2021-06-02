//Write a C program to check whether a given number is amstrong or not.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, originalNum, remainder, result = 0;
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
  
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
  
       originalNum /= 10;
    }

    if (result == num)
        printf("Amstrong", num);
    else
        printf("Not Amstrong", num);

    return 0;
}
     

