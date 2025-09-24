#include <stdio.h>

int main () {

int n, i, x;
int sum = 0;

printf("How many values are you inputing?\n");
scanf("%d", &n);

int table[n];

printf("Enter the values:\n");

for (i = 0; i < n; i++){
    scanf("%d", &table[i]);
}

for (x = 0; x < n; x++){
    sum = sum + table[x]; 
}

printf("Your total Sum is:\n%d\n", sum);

    return 0;
}