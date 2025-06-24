#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int maxnum=0;
    for(int i=0;i<N;i++){
        int a,d,g;
        cin>>a>>d>>g;
        int answer=a*(d+g)*((a==d+g)?2:1);
        maxnum=max(maxnum,answer);
    }
    cout<<maxnum;
}