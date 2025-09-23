#include <stdio.h>

int main () {

int a;

printf("Insert a number\n");
scanf("%i", &a);

if (a % 2 == 0) {
    printf("%i equal\n", a);

} else {
    printf("%i is odd\n", a);
}


    return 0;
}