#include<iostream>
#define ll long long
using namespace std;
ll arr[200'001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)cin>>arr[i];
    int T;
    cin>>T;
    while(T--){
        int op;
        cin>>op;
        if(op==1){
            ll c,x;
            cin>>x>>c;
            ll tmp=c;
            ll ind=x;
            while(tmp){
                if(ind<0)break;
                ll minnum=min(tmp,arr[ind]);
                tmp-=minnum;
                arr[ind]+=minnum;
                ind--;
            }
            tmp=c;
            ind=x+1;
            while(tmp){
                if(ind>N)break;
                ll minnum=min(tmp,arr[ind]);
                tmp-=minnum;
                arr[ind]+=minnum;
                ind++;
            }
        }
        else{
            int x;
            cin>>x;
            cout<<arr[x]<<"\n";
        }
    }
}