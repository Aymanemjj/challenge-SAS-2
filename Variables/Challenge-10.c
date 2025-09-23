#include <stdio.h>
#include <math.h>

int main () {

float r;

printf("Insert the radius\n");
scanf("%f", &r);

const float volume = (4.0/3.0) * 3.14 * pow(r, 3.0);

printf("The volume of the sphere is: %.2f\n", volume );

    return 0;
}