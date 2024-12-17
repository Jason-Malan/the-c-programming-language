#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        // Replace tab with \t
        if (c == '\t') {  // tab
            printf("\\t");
        } else if (c == '\b') { // backspace
            printf("\\b");
        } else if (c == '\\') { // backslash
            printf("\\\\");
        } else {
            putchar(c);
        }
    }

    return 0;
}