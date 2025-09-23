#include <stdio.h>

int main() {


int age;
char fullname[30], gender[10], email[30];

printf("Insert your full name:\n");
fgets(fullname, sizeof(fullname),stdin);

printf("Insert your age:\n");
scanf("%d", &age);

printf("Insert your gender:\n");
scanf("%s", &gender);

printf("Insert your email:\n");
scanf("%s", &email);

printf("Full name: %s\nAge: %d\nGender: %s\nEmail: %s\n", fullname, age, gender, email);



    
    return 0;
}