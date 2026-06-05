#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
// Learning C - User Input (scanf)

int age = 0;
char name [50] = "";
float grade = 0.0f;
float height = 0.0f;
int number = 0;



printf("\n----- STUDENT PROFILE -----\n");

printf("What's your name?: ");
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")] = '\0';

printf("What's your age?: ");
scanf("%d", &age);

printf("What's your height?: ");
scanf("%f", &height);

printf("What's your English Grade?: ");
scanf("%f", &grade);

printf("What's your favorite number?: ");
scanf("%d", &number);


system("cls");
printf("Name: %s", name);
printf("\nAge: %d", age );
printf("\nHeight: %.2f", height );
printf("\nEnglish Grade: %.2f", grade);
printf("\nFavorite number: %d",number);
    

    
return 0;
}