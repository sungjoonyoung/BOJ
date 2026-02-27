#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int T;
	scanf("%d", &T);
	int answer = 0;
	while (T--) {
		int N;
		scanf("%d", &N);
		if (N==1)continue;

		int key = 1;
		for (int i = 2; i < N; i++) {
			if (N % i == 0)key = 0;
		}
		if (key)answer++;
	}
	printf("%d", answer);
}