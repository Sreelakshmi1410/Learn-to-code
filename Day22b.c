//Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct student
{
    int name[20];
    char rollno;
    float marks;
} s[10];
int main()
{
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&s[i].rollno);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);
        
    }
    for(i=0;i<4;i++)
    {
        printf("DETAILS OF ROLLNO %d",s[i].rollno);
        printf("\nNAME: %s",s[i].name);
        printf("\nMARKS: %.2f\n",s[i].marks);
    }
      
    

    return 0;
}
