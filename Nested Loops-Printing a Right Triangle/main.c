#include <stdio.h>

int main(void) {
    int height;
    printf("Enter in a number.\n");
    scanf("%d", &height);
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}