#include<iostream>
using namespace std;
int N;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    string a,b;
    cin>>a>>b;
    long long aa,bb;
    int ax,bx;
    ax=bx=0;
    long long answer=0;
    for(int i=0;i<2*N-1;i++){
        if(a[i]=='R')ax++;
        if(b[i]=='R')bx++;
        if(ax<=bx) answer+=bx-ax+1;        
    }
    aa=answer;
    ax=bx=0;
    answer=0;
    for(int i=0;i<2*N-1;i++){
        if(b[i]=='R')ax++;
        if(a[i]=='R')bx++;
        if(ax<=bx) answer+=bx-ax+1;        
    }
    bb= answer;
    cout<<min(aa,bb);
}