#include <stdio.h>

int main () {

int a, b, c, d, e, i;

printf("Input 5 integer values:\n");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

int table[5];

table[0] = a;
table[1] = b;
table[2] = c;
table[3] = d;
table[4] = e;

for (i = 0; i < 5; i++) {
    printf("%d\n", table[i]);
}
    return 0;
}