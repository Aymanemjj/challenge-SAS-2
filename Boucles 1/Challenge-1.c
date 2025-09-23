#include <stdio.h>

int main () {

float i;
int x;
float sum;

printf("Insert a number\n");
scanf("%f", &i);



for (x = 0; x <=10; x++) {
    sum = x * i;
    printf("%.2f * %i = %.2f\n", i, x, sum);
}


    return 0;
}