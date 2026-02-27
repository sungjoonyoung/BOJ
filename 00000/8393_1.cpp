#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int N;
	scanf("%d",&N);
	int tmp=0;
	for(int i=1;i<=N;i++)tmp+=i;
	printf("%d",tmp);
}