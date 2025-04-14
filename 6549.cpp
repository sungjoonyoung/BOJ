#include<iostream>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
vector<pair<int,int>> v;
int evenN;
long long func(int s, int e){
    if(e<s)return 0;
    long long tmpminnum=1'000'000'002;
    int ind1=s+evenN;
    int ind2=e+evenN;
    int outind=-1;
    while(ind1<=ind2){
        if(ind1%2==1){
            if(tmpminnum>v[ind1].first){
                tmpminnum=v[ind1].first;
                outind=v[ind1].second;
            }
        }
        if(ind2%2==0){
            if(tmpminnum>v[ind2].first){
                tmpminnum=v[ind2].first;
                outind=v[ind2].second;
            }
        }
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }
    return max((long long)tmpminnum*(e-s+1),max(func(s,outind-1),func(outind+1,e)));
}
void solve(int N){
    if(N!=1)evenN=(int)pow(2,(int)log2(N-1)+1);
    else evenN=1;
    v.resize(evenN*2+5);
    for(int i=0;i<v.size();i++)v[i]={1000000001,0};
    for(int i=evenN;i<evenN+N;i++){
        int in;
        cin>>in;
        v[i].first=in;
        v[i].second=i-evenN;
    }
    for(int i=evenN;i>1;i/=2){
        for(int j=i;j<i*2;j+=2){
            if(v[j].first<=v[j+1].first)v[j/2]=v[j];
            else v[j/2]=v[j+1];
        }
    }
    long long maxtotal=func(0,N-1);    
    cout<<maxtotal<<"\n";
    v.clear();
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int N;
        cin>>N;
        if(N==0)break;
        if(N==1){
            int in;
            cin>>in;
            cout<<in<<"\n";
        }
        else solve(N);
    }
}