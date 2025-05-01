#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[1000];
int main(void) {
	int N;
	scanf("%d", &N);

	for (int i = 0;i < N;i++) {
		int in;
		scanf("%d", &in);
		arr[in + 100]++;
	}

	int T;
	scanf("%d", &T);

	printf("%d", arr[T + 100]);
}
