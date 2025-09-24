#include <stdio.h>

int main () {

int n, i, x;
int max = 0;

printf("How many values are you inputing?\n");
scanf("%d", &n);

int table[n];

printf("Enter the values:\n");

for (i = 0; i < n; i++){
    scanf("%d", &table[i]);
}

for (x = 0; x < n; x++){
    if (max < table[x]){
        max = table[x];
    }else 
    break;
}
printf("The max value is:\n%d\n", max);

    return 0;
}