#include<iostream>
using namespace std;
int N;
int solve(string x, string y){
    string a,b;
    a=x;
    b=y;
    int ax,bx;
    ax=bx=0;
    int answer=0;
    
    int inda,indb;
    inda=indb=2*N-1;
    while(a[inda]=='U')inda--;
    while(b[indb]=='R')indb--;
    if(a[0]=='U'){
        swap(a[0],a[inda]);
        answer++;
    }
    if(b[0]=='R') {
        swap(b[0],b[indb]);
        answer++;
    }

    int maxnum=0;
    for(int i=0;i<2*N-1;i++){

        if(a[i]=='R')ax++;
        if(b[i]=='R')bx++;
        
        if(ax<=bx) maxnum=max(maxnum,bx-ax+1);
    }
    return answer+maxnum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    string a,b;
    cin>>a>>b;
    //cout<<solve(a,b)<<"\n"<<solve(b,a);
    cout<<min(solve(a,b),solve(b,a));
}