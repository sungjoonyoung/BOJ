#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
    int N;
    scanf("%d", &N);
    for (int f = 1; f < N + 1; f++) {
        for (int i = 0; i < N - f; i++) {
            printf(" ");
        }
        for (int i = 0; i < 2 * f - 1; i++) {
            printf("*");
        }
        printf("\n");
    }
}