#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void){
    int in;
    scanf("%d",&in);
    for(int i=0;i<in+2;i++)printf("@");
    printf("\n");
    for(int i=0;i<in;i++){
        printf("@");
        for(int j=0;j<in;j++)printf(" ");
        printf("@\n");
    }
    for(int i=0;i<in+2;i++)printf("@");
}