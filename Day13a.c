//Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000], ch;
    int count = 0;

    fgets(str, sizeof(str), stdin);

    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("%d",count);
    return 0;
}
      
