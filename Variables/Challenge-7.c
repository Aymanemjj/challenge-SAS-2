#include <stdio.h>

int main() {

float number1, number2, number3,sum;
printf("Insert 3 numbers:\n");
scanf("%f %f %f", &number1, &number2, &number3);

sum = (number1 * 2 + number2 * 3 + number3 *5) / 10;

printf("%.3f\n", sum);
return 0;
}