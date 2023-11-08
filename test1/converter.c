#include <stdio.h>
#include <stdlib.h>

void celsiusToFarenheit() {
    float temperature;
    printf("Enter temp (in Celsius): ");
    scanf("%f", &temperature);

    float farenheit = temperature * 1.8 + 32;
    printf("%.2fC is %.2fF", temperature, farenheit);
}

void farenheitToCelsius() {
    float temperature;
    printf("Enter temp (in Farenheit): ");
    scanf("%f", &temperature);

    float celsius = (temperature - 32) * (5./9.);
    printf("%.2fF is %.2fC", temperature, celsius);
}

void temperatureMenu() {
    int operation = 0;
    printf("Choose your operation:\n\n\t[1] Celsius to Farenheit\n\t[2] Farenheit to Celsius\n");
    
    scanf("%d", &operation);

    switch(operation) {
        case 1 :
            celsiusToFarenheit();
            break;
        case 2 :
            farenheitToCelsius();
            break;
        default :
            printf("\nOperation error.");
            break;
    }
}

void kgToLbs() {
    float mass;
    printf("Enter mass (in kg): ");
    scanf("%f", &mass);

    float pounds = mass / 0.45359237;
    printf("%.2f kg is %.2f lbs", mass, pounds);
}

void lbsToKg() {
    float mass;
    printf("Enter mass (in lbs): ");
    scanf("%f", &mass);

    float kilos = mass * 0.45359237;
    printf("%.2f lbs is %.2f kg", mass, kilos);
}

void massMenu() {
    int operation = 0;
    printf("Choose your operation:\n\n\t[1] Kilograms to Pounds\n\t[2] Pounds to Kilograms\n");
    
    scanf("%d", &operation);

    switch(operation) {
        case 1 :
            kgToLbs();
            break;
        case 2 :
            lbsToKg();
            break;
        default :
            printf("\nOperation error.");
            break;
    }
}

int main(int argc, char *argv[]) {
    int operation = 0;
    printf("===== What would you like to convert? =====\n\t[1] Temperature\n\t[2] Mass\n");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            temperatureMenu();
            break;
        case 2:
            massMenu();
            break;
        default:
            printf("\nOperation error.");
            break;
    }
    return 0;
}