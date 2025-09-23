#include <stdio.h>

int main() {

float a, b, sum, produit, division, minus;

printf("Insert 2 real numbers:\n");
scanf("%f %f", &a, &b);

sum = a + b;
produit = a *b;
division = a / b;
minus = a-b;

printf("The results are\na+b= %.2f\na-b= %.2f\na*b= %.2f\na/b= %.2f", sum, minus, produit, division);

    return 0;
}