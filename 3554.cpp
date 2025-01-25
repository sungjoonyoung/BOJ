#include<iostream>
#include<vector>
using namespace std;
vector<long long> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int T;
    cin>>T;
    while(T--){
        int op,a,b;
        cin>>op>>a>>b;
        if(op==2){
            long long sum=0;
            for(int i=a-1;i<b;i++)sum+=v[i];
            cout<<sum<<"\n";
        }
        else{
            for(int i=a-1;i<b;i++)v[i]=v[i]*v[i]%2010;
        }
    }
}