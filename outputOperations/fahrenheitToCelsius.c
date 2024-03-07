#include <stdio.h>

int main(){
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius: %.2f", (fahrenheit - 32) / 1.8);

    return 0;
}