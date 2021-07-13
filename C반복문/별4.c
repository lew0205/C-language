#include <stdio.h>
int main() {
    int N;
    scanf_s("%d", &N);
    for (int i = 1; i < N + 1; i++) {
        for (int j = 0; j < N - i; j++)
            printf(" ");
        for (int j = 0; j < (i - 1) * 2 + 1; j++)
            printf("*");
        printf("\n");
    }
}