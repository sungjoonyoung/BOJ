#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void){
    int maxnum=-1;
    int x,y;
    for(int i=1;i<=9;i++)for(int j=1;j<=9;j++){
        int in;
        scanf("%d",&in);
        if(in>maxnum){
            maxnum=in;
            x=i;
            y=j;
        }
    }
    printf("%d\n%d %d",maxnum,x,y);
}