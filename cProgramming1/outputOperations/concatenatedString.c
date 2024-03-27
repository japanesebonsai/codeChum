#include <stdio.h>
#include <string.h>

int main(){
    char ch1[10];
    char ch2[10];
    printf("Enter the first string: ");
    fgets(ch1, sizeof(ch1), stdin);
    ch1[strcspn(ch1, "\n")] = 0;
    
    printf("Enter the second string: ");
    fgets(ch2, sizeof(ch2), stdin);
    ch2[strcspn(ch2, "\n")] = 0;
    
    printf("Concatenated String: %s", strcat(ch1, ch2));
    

    return 0;
}