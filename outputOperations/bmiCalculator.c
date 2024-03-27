#include <stdio.h>
#include <math.h>

int main(){
    int w;
    float h;
    printf("Enter weight in kilograms: ");
    scanf("%i", &w);
    printf("Enter height in meters: ");
    scanf("%f", &h);

    printf("BMI: %.2f", (float)w / pow(h, 2));

    return 0;
}