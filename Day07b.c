//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a,b;
printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
scanf("%d",&n);
scanf("%d%d",&a,&b);
switch(n){
        {
        case 1:
        printf("\n%d",a+b);
        break;
        }
        {
            case 2:
        printf("\n%d",a-b);
        break;
        }
        {
   case 3:
        printf("\n%d",a*b);
        break;
        }
        {
    case 4:
       if(b==0)
       {
        printf("\nCannot be determined");
       }
       else
       {
        printf("\n%.1f",a/(float)b);
       }
       break;
       }
default:
        {
        printf("\n Enter a valid option number");
        break;
}
}
 return 0;
}
 
