#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    while(N--){ // 주의! 해당 테크닉은 N이 -1이 됩니다.
        printf("I love DGU\n");
    }
}