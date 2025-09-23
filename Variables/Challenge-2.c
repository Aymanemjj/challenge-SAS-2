#include <stdio.h>
int main () {

float celsius, kelvin;

printf("Write the temperature in celsius:\n");
scanf("%f", &celsius);

kelvin = celsius + 273.15;

printf(" The temperature in kelvin is: %.2f K\n", kelvin);

    return 0;
}