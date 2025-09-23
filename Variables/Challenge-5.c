#include <stdio.h>
int main () {

float temperrature; 

printf("Input the temperature in celsius:\n");
scanf("%f", &temperrature);

if (temperrature < 0) {
    printf(" The state of water at this temperature is: Solid\n");

} else if (temperrature > 0 && temperrature < 100) {
    printf(" The state of water at this temperature is: Liquid\n");

} else {
    printf("The state of water at this temperature is: Gas\n");
}
    return 0; 
}