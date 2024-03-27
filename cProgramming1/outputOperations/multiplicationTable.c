#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);

    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", n, i, n*i);
    }

    return 0;

    /*
    int i = 1;
    while(i <= 10){
        printf("%i x %i = %i\n", n, i, n*i);
        i++;
    }
    */

   /*
   int i = 1;
    do{
        printf("%i x %i = %i\n", n, i, n*i);
        i++;
    } while(i <= 10);
   */
}