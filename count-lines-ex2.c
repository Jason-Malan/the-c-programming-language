#include <stdio.h>

int main() {
    int c, prevWasSpace;

    printf("Transformed output: \n");
    while ((c = getchar()) != EOF) {
        if (c == 32) // blank
        {
            prevWasSpace = 1;
        } else {
            if (prevWasSpace) {
                putchar(32);
            }
            putchar(c);
            prevWasSpace = 0;
        }
    }
    

    return 1;
}