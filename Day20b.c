//Write a C program to find the second maximum element in an array of integer elements
#include <stdio.h>
#include<limits.h>
#define MAX_SIZE 100

int main() 
{
int arr[MAX_SIZE], size, i;
int max1, max2;
scanf("%d", &size);
for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;
    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("%d", max2);
    return 0;
} 
 
