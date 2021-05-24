//Write a C program to find the frequency of odd and even numbers in the 1D array.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[1000],i,n,even=0,odd=0;
 
    scanf("%d",&n);
 
   
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
     for(i=0; i<n; i++)
    {
          if(a[i]%2==0)
          even++;
          else
          odd++;
                   
    }
     printf("%d",even);
     printf("\n%d",odd);
 
 
    return 0;
}
