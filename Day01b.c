//Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)


#include <stdio.h>
int main() 
{
   char a;
   int  b;
   float c;
   double d;
   scanf("%c",&a);
   scanf("%d",&b); 
   scanf("%f",&c); 
   scanf("%lf",&d);
   printf("%c\n",a);
   printf("%d\n",b) ;
   printf("%f\n",c) ;
   printf("%lf\n",d);
    
    return 0;
}
