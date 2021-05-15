//Write a C Program to determine the factorial of a number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
int n,f = 1;
scanf("%d",&n);
if(n == 0)
{
printf("1");
}
else if(n<0)
{
printf("ERROR");
}
else
{
for(int i=1;i<=n;i++)
f=f*i;
printf("%d",f);
}
return  0;
}
