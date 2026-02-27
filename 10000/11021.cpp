#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n",i+1 , a + b);
	}
}