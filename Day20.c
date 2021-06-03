//Write a C program to find the factorial of a given number using a recursive function
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<0){
    printf("ERROR");
    }
    else
    {
    printf("%ld",multiplyNumbers(n));
    }
    return 0;
}

 int multiplyNumbers(int n) {
   if (n==0|n==1)
   return 1;
    else (n>=1);
        return n*multiplyNumbers(n-1); 
}
 
