//Write a C Program to identify if a number is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,reversedN = 0,remainder,originalN;
    scanf("%d", &n);
    originalN = n;
while (n != 0) {
    remainder = n % 10;
    reversedN = reversedN * 10 + remainder;
    n /= 10;
}
if (originalN == reversedN)
    printf("Yes",originalN);
else
    printf("No",originalN);
return 0;
}

