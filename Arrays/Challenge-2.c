#include <stdio.h>

int main () {

int a, i;

printf("How many elements do you want in the table?\n");
scanf("%d", &a);

int table[a];

printf("Input the values:\n");

for (i = 0; i < a; i++){
    scanf("%d", &table[i]);
}
printf("Your table is:\n");

for (i = 0; i < a; i++){
    printf("%d\n", table[i]);
}

    return 0;
}