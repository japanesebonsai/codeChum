#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII art of %c:\n", ch);
    printf("   __%c__\n"
           "  /     \\\n"
           " |   o   |\n"
           "(|  (_)  |)\n"
           " |   |   |\n"
           " |  / \\  |\n"
           " |       |\n"
           " |       |\n"
           " |_______|", ch);

    return 0;
}