//Write a C program to count and display the number of Vowels, Consonants and spaces in a string
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        } else if (line[i] >= '0' && line[i] <= '9') {
            ++digit;
        } else if (line[i] == ' ') {
            ++space;
        }
    }

    printf("%d", vowels);
    printf("\n%d", consonant); 
    printf("\n%d", space);
    return 0;
}
   
