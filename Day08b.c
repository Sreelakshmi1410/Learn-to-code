//Write a C Program to compute the multiplication table of 1 - 5 using do-while.

#include <stdio.h>
#include<stdlib.h>
int main() {
   do
   {
       int i,n;
       printf("\n1.Table of 1 \n2.Table of 2 \n3.Table of 3 \n4.Table of 4 \n5.Table of 5 \n6.Exit \n");
       scanf("%d", &n);
       if(n==6)
       {
           exit(0);
       }
       if(n>6)
       {
           printf("Enter a valid option!");
       }
       if(n<6)
       {
            for(i=1;i<=10;i++)
            {
              printf("%d ",n*i);
            }
       }
   }while(1);
}
