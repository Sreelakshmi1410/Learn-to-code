//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int r=0,n,sum=0,d,f1,f2;
int n1,i,m=0,flag=0;
scanf("%d%d",&f1,&f2);
sum=f1+f2;
if(sum%2==0)
{
    n=sum;
    while(n>0)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    printf("%d",sum);
    printf("\n%d",r);
}
    else{
        printf("%d",sum);
        n1=sum;
        m=n1/2;
        for(i=2;i<=m;i++)
        {
            if(n1%i==0)
            {
                printf("\nNot prime");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("\nPrime");
    }
   
    return 0;
}
