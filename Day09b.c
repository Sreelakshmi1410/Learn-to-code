//Write a C program to print the following number pattern

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b ,c ,d;
    scanf("%d",&a);
    for(b = a;b >= 1;b--)
    {
        {for(d=a-1;d>=b;d--)
            printf(" ");
         for(c = 1;c <= b; c++)
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
