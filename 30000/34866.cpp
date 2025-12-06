#include <iostream>
#include <algorithm>
#include<vector>
#include<queue>
#include<limits>
using namespace std;
vector<int> m;
vector<int> q;
long long N;
long long answer[500'001];


long long func(long long y){
    long long x=0;
    for(int i=0;i<N;i++){
        long long tmp=y;
        tmp-=q[i];
        if(tmp<0)continue;
        if(tmp%m[i]==0){
            tmp/=m[i];
        }
        else{
            tmp/=m[i];tmp++;
        }
        
        x+=tmp;
        if(x>1'000'000'000'000)return 1'000'000'000'000+5;
    }
    return x;
}
int main(void) {
    long long X;
    cin>>N>>X;
    m.resize(N);q.resize(N);
    for(int i=0;i<N;i++)cin>>q[i];
    for(int i=0;i<N;i++)cin>>m[i];
    long long s,e;
    s=1;
    e=2'000'000'000'000'000'005;
    // e=__LONG_LONG_MAX__/2;
    // X--;
    long long op=0;
    long long mid=0;
    long long time=0;
    while(s+1!=e){
        mid=(s+e)/2;
        op=func(mid);
        if(op<X)s=mid;
        else if(op>=X)e=mid;
    }
    long long minnum=2'000'000'000'000'000;
    for(int i=0;i<N;i++){
        long long tmp=s;
        tmp-=q[i];
        if(tmp<=0){
            tmp=0;
        }
        else if(tmp%m[i]==0){
            tmp/=m[i];
        }
        else{
            tmp/=m[i];tmp++;
        }
        answer[i]=tmp*m[i]+q[i];
        minnum=min(minnum,answer[i]);
        // cout<<tmp<<" ";
    }
    long long tmp=func(s);
    for(int i=0;i<N;i++){
        if(X-tmp>0 && minnum==answer[i]){
            X--; 
            answer[i]+=m[i];
        }
        cout<<(long long)answer[i]<<" ";
    }
}