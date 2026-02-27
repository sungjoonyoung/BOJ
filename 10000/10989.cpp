#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[10001];

int main(void) {
	int N;
	scanf("%d",&N);
	int tmp;
	for (int i = 0; i < N; i++) {
		scanf("%d",&tmp);
		arr[tmp]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n",i);
		}
	}
}