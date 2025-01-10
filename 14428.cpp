#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> v;
int N,LN;
void swapf(void){
    int i,a;
    cin>>i>>a;
    i+=pow(2,LN)-1;
    v[i]=a;
    i/=2;
    while(i){
        v[i]=min(v[i*2],v[i*2+1]);
        i/=2;
    }
}
int findf(void){
    int s,e;
    cin>>s>>e;
    s+=pow(2,LN)-1;
    e+=pow(2,LN)-1;
    int tmps=s;
    int tmpe=e;
    int answer=1'000'000'002;
    while(s<=e){
        if(s%2==1)answer=min(answer,v[s]);
        if(e%2==0)answer=min(answer,v[e]);
        s=(s+1)/2;
        e=(e-1)/2;
    }
    for(int i=tmps;i<=tmpe;i++)if(v[i]==answer)return (i-pow(2,LN)+1);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    if(N>=2)LN=log2(N-1)+1;
    else LN=0;
    v.resize(pow(2,LN+1));
    fill(v.begin()+pow(2,LN),v.end(),1'000'000'001);
    for(int i=pow(2,LN);i<pow(2,LN)+N;i++)cin>>v[i];
    for(int l=LN-1;l>=0;l--){
        for(int i=pow(2,l);i<pow(2,l+1);i++){
            v[i]=min(v[i*2],v[i*2+1]);
        }
    }
    int M;
    cin>>M;
    while(M--){
        int op;
        cin>>op;
        if(op==1)swapf();
        else cout<<findf()<<"\n";
    }
}