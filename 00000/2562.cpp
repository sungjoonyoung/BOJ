#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int maxnum = -1;
	int maxind;
	for (int i = 1; i <= 9; i++) {
		int in;
        scanf("%d",&in);
		if (in > maxnum) {
			maxnum = in;
			maxind = i;
		}
	}
    printf("%d\n%d",maxnum,maxind);
}