#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int answer=0;
    answer+=((a-b)<=1000);
    answer+=((a-c)<=1000);
    answer+=((a-d)<=1000);
    answer+=((a-e)<=1000);
    cout<<answer;
}