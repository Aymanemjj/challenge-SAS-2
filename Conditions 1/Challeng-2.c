#include <stdio.h>
#include <ctype.h>


int main (){

char letter;

printf("write a letter:\n");
scanf("%c",&letter);

letter = tolower(letter);

switch (letter) {
    case 'a':
        printf("This is a vowel\n");
        break;
    case 'e':
        printf("This is a vowel\n");
        break;
    case 'i':
        printf("This is a vowel\n");
        break;
    case 'o':
        printf("This is a vowel\n");
        break;
    case 'u':
        printf("This is a vowel\n");
        break;
    case 'y':
        printf("This is a vowel\n");
        break;
    default:
        printf("Not a vowel\n");
}


    return 0;
}