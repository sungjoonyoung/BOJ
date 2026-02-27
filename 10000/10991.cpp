#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    for(int f=0;f<N;f++){
        for(int i=0;i<N-f-1;i++)printf(" ");
        for(int i=0;i<f+1;i++){
            printf("* ");
        }
        printf("\n");
    }
}