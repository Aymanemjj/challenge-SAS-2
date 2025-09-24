#include <stdio.h>

int main () {

int n, i, x, min;


printf("How many values are you inputing?\n");
scanf("%d", &n);

int table[n];

printf("Enter the values:\n");

for (i = 0; i < n; i++){
    scanf("%d", &table[i]);
}

for (x = 0; x < n; x++){
    if (min > table[x]){
        min = table[x];
    }else 
    break;
}
printf("The minimum value is:\n%d\n", min);

    return 0;
}