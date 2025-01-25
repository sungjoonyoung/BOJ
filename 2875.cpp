#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin>>A>>B>>C;
    int tmp=min(A/2,B);
    int sum=A+B;
    sum-=tmp*3;
    if(C<=sum)cout<<tmp;
    else{
        C-=sum;
        C=(C-1)/3+1;
        cout<<max(0,tmp-C);
    }
}