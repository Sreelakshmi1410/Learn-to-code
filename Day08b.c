//Write a C Program to compute the multiplication table of 1 - 5 using do-while.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
int num, i=1;
printf("\n1.Table of 1");
printf("\n2.Table of 2");
printf("\n3.Table of 3");
printf("\n4.Table of 4");
printf("\n5.Table of 5");
printf("\n6.Exit\n");
scanf("%d",&num);    
if(num<=5)
do
{
printf("%d ", num*i);
i++;
}while(i<=10);
else
printf("Enter a valid option!");
printf("\n1.Table of 1");
printf("\n2.Table of 2");
printf("\n3.Table of 3");
printf("\n4.Table of 4");
printf("\n5.Table of 5");
printf("\n6.Exit\n");
return 0;
}

