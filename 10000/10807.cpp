#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[100];
int main(void) {
  int N;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
      int in;
      scanf("%d",&in);
      arr[i]=in;
  }
  int T;
  scanf("%d",&T);
  int answer=0;
  for(int i=0;i<N;i++){
    if(arr[i]==T){
      answer++;
    }
  }
  printf("%d",answer);
}