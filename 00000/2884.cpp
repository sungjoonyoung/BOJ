#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int hh, mm;
	scanf("%d %d", &hh, &mm);

	int m = hh * 60 + mm;
	m = m - 45;
	m = m +  60 * 24;
	m = m % (60 * 24);
	printf("%d %d", m / 60, m % 60);
}