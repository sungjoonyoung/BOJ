#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.9lf", a / b); // 소수 부분을 더 출력하는 게 좋겠죠?
}