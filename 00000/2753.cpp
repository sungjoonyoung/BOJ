#include<stdio.h>
int main(void) {
  int a;
  scanf("%d",&a);
  printf("%d",(a % 4 == 0 && !(0 ==a % 100))||a % 400==0);
  return 0;
}