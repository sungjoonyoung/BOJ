#include<stdio.h>

int main(void) {

	int a;
    scanf("%d",&a);

	if (a > 89) printf("A");
	if (a < 90 && a > 79) printf("B");
	if (a < 80 && a > 69) printf("C");
	if (a < 70 && a > 59) printf("D");
	if (a < 60)printf("F");
}