#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> maxv;
vector<int> minv;
int LN;
int minf(int s,int e){
    s+=pow(2,LN)-1;
    e+=pow(2,LN)-1;
    int answer=1000000001;
    while(s<=e){
        if(s%2==1)answer=min(answer,minv[s]);
        if(e%2==0)answer=min(answer,minv[e]);
        s=(s+1)/2;
        e=(e-1)/2;
    }
    return answer;
}
int maxf(int s,int e){
    s+=pow(2,LN)-1;
    e+=pow(2,LN)-1;
    int answer=0;
    while(s<=e){
        if(s%2==1)answer=max(answer,maxv[s]);
        if(e%2==0)answer=max(answer,maxv[e]);
        s=(s+1)/2;
        e=(e-1)/2;
    }
    return answer;
}
int main(void){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int N,M;
    cin>>N>>M;
    if(N>=2)LN=log2(N-1)+1;
    else LN=0;
    maxv.resize(pow(2,LN+1));
    minv.resize(pow(2,LN+1));
    fill(minv.begin()+pow(2,LN),minv.end(),1000000001);
    
    for(int i=pow(2,LN);i<pow(2,LN)+N;i++){
        cin>>maxv[i];
        minv[i]=maxv[i];
    }
    
    for(int l=LN-1;l>=0;l--)  {
        for(int i=pow(2,l);i<pow(2,l+1);i++){
            maxv[i]=max(maxv[i*2],maxv[i*2+1]);
            minv[i]=min(minv[i*2],minv[i*2+1]);
        }
    }
    
    while(M--){
        int s,e;
        cin>>s>>e;
        cout<<minf(s,e)<<" "<<maxf(s,e)<<"\n";
    }
}