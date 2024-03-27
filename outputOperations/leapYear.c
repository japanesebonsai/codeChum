#include <stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%i", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%i is a leap year.", year);
    }
    else {
        printf("%i is not a leap year.", year);
    }
    
    return 0;
}