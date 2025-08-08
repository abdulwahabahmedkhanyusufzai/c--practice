#include <iostream>  
#include <string.h>  


int main() {
    char firstName[100]; 
    float height;
    float weight;

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    float BMI = weight / (height * height);

    printf("%s's BMI is %.2f\n", firstName, BMI);

    return 0;
}

