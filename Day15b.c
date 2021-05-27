//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int m,n,p,q,c,d,k,sum=0;
int first[10][10],second[10][10],
multiply[10][10];
scanf("%d%d",&m,&n);
    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
scanf("%d",&first[c][d]);
scanf("%d%d",&p,&q);
    if(n != p)
        printf("ERROR");
    else
    {
    for(c=0;c<p;c++)
    for(d=0;d<q;d++)
    scanf("%d",&second[c][d]);
    for(c=0;c<m;c++){
    for(d=0;d<q;d++){
    for(k=0;k<p;k++){
        sum = sum + first[c][k] * second[k][d];
    }
    multiply[c][d] = sum;
    sum = 0;
    }
    }
    for(c=0;c<m;c++){
    for(d=0;d<q;d++)
    printf("%d ",multiply[c][d]);
        
    printf("\n");
    }
    }
    return 0;
}
