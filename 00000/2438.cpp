#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
    int N;
    scanf("%d",&N);
    for(int x=1;x<N+1;x++){
        for(int i=0;i<x;i++){
            printf("*");
        }
        printf("\n");
    }
}