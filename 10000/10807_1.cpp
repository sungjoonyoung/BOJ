#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[2000];
int main(void) {
	int many;
	scanf("%d",&many);
	int tmp;
	for (int i = 0; i < many; i++) {
		scanf("%d",&tmp);
		tmp = tmp + 100;
		arr[tmp]++;
	}

	int what;
	scanf("%d",&what);
	what = what + 100;
	printf("%d",arr[what]);
}