#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int N, ans=1;
    scanf("%d",&N);
	for (int i = 1; i <= N; i++) ans *= i;
    printf("%d",ans);
}