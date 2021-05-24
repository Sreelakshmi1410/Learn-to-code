//Write a C program to check whether a number present in the 1D array or not.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[10],i,n,key,flag = 0;
scanf("%d",&n);
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
scanf("%d", &key);
for(i=0; i<n; i++)
{
if(a[i]==key)
flag++;
}
{
if(flag==0) 
{
printf("%d is not present in this array",key);
}
else
printf("%d is present in this array",key);
}
return 0;
}
