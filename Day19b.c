//Write a C program to find the number of words in a string. Also reverse string.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void reversestr(char str[])
{
    char s[100];
    int count = 0,i;
     scanf("%[^\n]s", s);
     for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
    }
    printf("no of words = %d\n",count + 1);

    int length , k;
    while (s[count] != '\0')
    count++;
    length = count;
    for(k=length-1; k >= '\0';k--)
    {
        printf("%c",s[k]);
    }
}
int main()
{
        char str[100];
        reversestr(str);
        return 0;
}


