#include <stdio.h>
int main() {
    int n;
    scanf_s("%d", &n);
    for (int j = 0; j < n; j++) {
        for (int i = n - j; i > 0; i--) {
            printf("*");
        }
        printf("\n");
    }
}