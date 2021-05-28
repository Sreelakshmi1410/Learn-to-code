//Write a C program to find the minimum and maximum element of an array.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int arr[128];
    int n = 0, i = 0, min = 0, max = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    max = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("%d\n", min);
    printf("%d\n", max);
    return 0;
}
