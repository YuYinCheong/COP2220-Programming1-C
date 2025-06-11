#include <stdio.h>
void TripleSwap(int *a, int *b, int *c);

int main(void)
{
    int a, b, c;
    printf("Enter in values for A, B, and C:\n");
    scanf("%d %d %d", &a, &b, &c);
    TripleSwap(&a, &b, &c);
    printf("Final values of A, B, and C: %d, %d, %d\n", a, b, c);
    return 0;
}

void TripleSwap(int *a, int *b, int *c) {
    int A = *a;
    int B = *b;
    int C = *c;
    *a = C;
    *b = A;
    *c = B;
}