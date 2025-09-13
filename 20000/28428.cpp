#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //3 번 4번 형식을 지키면 서로소인 두 수로 회귀
    //1 번 2번 형식을 지키면 회귀되는 seed가 달라짐
    //서로소인 두 자연수 (n,m)에 대해서 1번을 계속 적용하면 (1,q) 혹은 (p,1)꼴이 됨
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    if(x==y)x=0;
    else if(x<y)x=-1;
    else if(x>y)x=1;

    if(a==b)a=0;
    else if(a<b)a=-1;
    else if(a>b)a=1;
    
    if(x==a)cout<<"YES";
    else cout<<"NO";
}