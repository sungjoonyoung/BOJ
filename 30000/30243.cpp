#include<iostream>
#include<cmath>
using namespace std;
int N;
unsigned long long plusn,minun,row,col;
int answer[40];
int skip[40];
int DFS(int x){
    if(x==N)return 1;
    if(row==(row|(1ull <<x))) return DFS(x+skip[x]);
    
    unsigned long long table = (col)& (~((plusn>>x)|(minun>>(N-x))));
    for(unsigned long long nx;table!=0;table^=nx){
        nx=table&(-table);
        col^=nx;
        plusn|=nx<<x;
        minun|=nx<<(N-x);
        answer[x]=log2(nx);
        if(DFS(x+1)==1)return 1;
        col^=nx;
        plusn^=nx<<x;
        minun^=nx<<(N-x);
        answer[x]=0;
    }
    return 0;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    col=(1ull<<N)-1;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        if(in==0)continue;
        //in--;
        answer[i]=in;
        // row|=(1ull <<i);
        // col^=(1ull <<answer[i]);
        // plusn|=(1ull <<(i+answer[i]));
        // minun|=(1ull <<(answer[i]-i+N));
    }
    for(int i=N-1;i>=0;i--){
        if(answer[i]){
            skip[i]=skip[i+1]+1;
            answer[i]--;
            row|=(1ull <<i);
            col^=(1ull <<answer[i]);
            plusn|=(1ull <<(i+answer[i]));
            minun|=(1ull <<(answer[i]-i+N));
        }
    }
    //for(int i=0;i<N;i++)cout<<answer[i]+1<<" ";
    if(DFS(0)==1)for(int i=0;i<N;i++)cout<<answer[i]+1<<" ";
    else cout<<"-1";
    
}  