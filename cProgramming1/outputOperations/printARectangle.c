#include <stdio.h>

int main(){
    int w, h;
    printf("Enter width: ");
    scanf("%i", &w);
    printf("Enter height: ");
    scanf("%i", &h);

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}