#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char _map[5000][5000];
int main(void) {
    int N,M;
    scanf("%d %d ",&N,&M);
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)scanf(" %c",&_map[i][j]);
    int ok=0;
    for(int i=0;i<N-1;i++)for(int j=0;j<M-1;j++){
        int answer=1;
        answer*=_map[i][j]-'0';
        answer*=_map[i+1][j]-'0';
        answer*=_map[i][j+1]-'0';
        answer*=_map[i+1][j+1]-'0';
        if(answer)ok=1;
    }
    printf("%d",ok);
}