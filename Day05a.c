//In a sequence of numbers from 1 - 100, replace the numbers divisble by 3 with "FIZZ", replace the numbers divisble by 5 with "BUZZ"
//and replace the numbers divisble by 15 with "FIZZBUZZ" and print the result./

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
int i;
for(i = 1; i<=100; i++)
{
if(i % 15 == 0)       
printf("FIZZBUZZ ");   
else if((i % 3)== 0)   
printf("FIZZ ");                
else if((i % 5)== 0)                      
printf("BUZZ ");                
else      
printf("%d ",i);                
}
return 0;
}
