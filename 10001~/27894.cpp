#include<stdio.h>
int a[100000];
int b[100000];
int N;
void solve(void){
    scanf("%d",&N);
    for(int i=0;i<N;i++)scanf("%d ",&a[i]);
    for(int i=0;i<N;i++)scanf("%d ",&b[i]);
    int key=1;
    for(int i=0;i<N;i++){
        if(a[i]!=b[i]){
            key=0;
            break;
        }
    }
    if(key){
        printf("POSSIBLE");
        return;
    }
    for(int i=0;i<N-2;i++){
        if(b[i]<b[i+1] && b[i+1]<b[i+2]){
            printf("POSSIBLE");
            return;
        }
        if(b[i]>b[i+1] && b[i+1]>b[i+2]){
            printf("POSSIBLE");
            return;
        }
    }
    printf("IMPOSSIBLE");
}
int main(void){
    solve();
}