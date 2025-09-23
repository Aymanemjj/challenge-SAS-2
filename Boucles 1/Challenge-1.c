#include <stdio.h>

int main () {

int i;
int x;
int sum;

printf("Insert a number\n");
scanf("%i", &i);



for (x = 0; x <=10; x++) {
    sum = x * i;
    printf("%i * %i = %i\n", i, x, sum);
}


    return 0;
}