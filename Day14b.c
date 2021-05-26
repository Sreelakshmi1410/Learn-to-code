//Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
 
        static int array[10][10];
        int i, j, m, n, a;
 
        scanf("%d %d", &m, &n);
 
        if (m == n)
        {
      
            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++) 
                {
                    scanf("%dx%d", &array[i][j]);
                }
            }
 
          
            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++)  
                {
                    if(i==j){
                    printf("%d ", array[i][j]);
                }
                }
                }
            printf("\n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n;j++)
                    if((i+j) == (m - 1))
                {
                    printf("%d ", array[i][j]);
                }
                }
                 printf("\n");
        }
      else
            printf("ERROR\n");
 
    }
