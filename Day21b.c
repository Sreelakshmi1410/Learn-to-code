//Write a C program to find the number of prime numbers in a array of integers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
int ar[100],i,j,n,prn=0,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=2;j<=ar[i]/2;j++)
        {
            if(ar[i]%j==0 )
            {
                p=0;
                break;
                
            }
        }
        if (p!=0)
        {
            prn++;
        }
        p=1;
    }
    printf("%d",prn);
    return 0;
}
