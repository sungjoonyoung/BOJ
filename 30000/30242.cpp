#include<iostream>
using namespace std;
int N;
long long plusn,minun,row,col;
int answer[40];
int DFS(int x){
    // for(int i=0;i<N;i++)cout<<answer[i]<<" ";
    // cout<<"\n";
    if(x==N)return 1;
    if(row==(row|((long long)1<<x))) return DFS(x+1);
    for(int i=0;i<N;i++){
        if(col==(col|((long long)1<<i))) continue;
        if(plusn==(plusn|((long long)1<<(x+i))))continue;
        if(minun==(minun|((long long)1<<(x-i+N))))continue;
        col|=((long long)1<<i);
        plusn|=((long long)1<<(x+i));
        minun|=((long long)1<<(x-i+N));
        answer[x]=i;
        if(DFS(x+1)==1)return 1;
        col^=((long long)1<<i);
        plusn^=((long long)1<<(x+i));
        minun^=((long long)1<<(x-i+N));
        answer[x]=0;
    }
    return -1;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        if(in==0)continue;
        in--;
        answer[i]=in;
        row|=((long long)1<<i);
        col|=((long long)1<<in);
        plusn|=((long long)1<<(i+in));
        minun|=((long long)1<<(i-in+N));
    }
    if(DFS(0)==1)for(int i=0;i<N;i++)cout<<answer[i]+1<<" ";
    else cout<<"-1";
    
}  