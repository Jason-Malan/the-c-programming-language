#include <stdio.h>

int main() {
    int c, nl, b, t;

    nl = 0;
    b = 0;
    t = 0;
    while ((c = getchar()) != EOF) {
        if (c == 10) // newline
            ++nl;
        else if (c == 32) // space
            ++b;
        else if (c == 9) // tab
            ++t;
        printf("newline %d\n", nl);
        printf("tab %d\n", t);
        printf("blank %d\n", b);
    }

    return 1;
}