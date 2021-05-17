//WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float marks1, marks2, marks3,average;
scanf("%f", &marks1);
scanf("%f", &marks2);
scanf("%f", &marks3);
average = (marks1 + marks2 + marks3) / 3;
printf("%0.2f\n",average);
if (average >= 90)
{
    printf("A");
}
else if(average >= 80)
{
    printf("B");
}
else if(average >= 70)
{
    printf("C");
}
else
{
    printf("D");
}
return 0;
}
    
 
