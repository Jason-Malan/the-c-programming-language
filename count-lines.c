#include <stdio.h>

int main() {
    // long count;

    // while (getchar() != EOF) {
    //     ++count;
    //     printf("%1d \n", count);
    // }

    double count; 
    for (count = 0; getchar() != EOF; ++count);
    printf("%.0f\n", count);

    return 1;
}