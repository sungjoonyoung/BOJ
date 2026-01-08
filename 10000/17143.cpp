#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>
using namespace std;
int N,M,K;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
typedef struct {
    int x,y,v,d,z;
}shark;
void simul(shark &x){
    int dl=x.v;
    if(x.d==1 and dl>(x.x-1)){dl-=(x.x-1);x.x=1;x.d=2;}
    if(x.d==2 and dl>(N-x.x)){dl-=(N-x.x);x.x=N;x.d=1;}
    if(x.d==3 and dl>(M-x.y)){dl-=(M-x.y);x.y=M;x.d=4;}
    if(x.d==4 and dl>(x.y-1)){dl-=(x.y-1);x.y=1;x.d=3;}
    //
    if(x.d==1 or x.d==2){dl%=(N-1)*2;}
    if(x.d==3 or x.d==4){dl%=(M-1)*2;}
    //
    if(x.d==1 and dl>(x.x-1)){dl-=(x.x-1);x.x=1;x.d=2;}
    if(x.d==2 and dl>(N-x.x)){dl-=(N-x.x);x.x=N;x.d=1;}
    if(x.d==3 and dl>(M-x.y)){dl-=(M-x.y);x.y=M;x.d=4;}
    if(x.d==4 and dl>(x.y-1)){dl-=(x.y-1);x.y=1;x.d=3;}
    //
    if(x.d==1){x.x-=dl;}
    if(x.d==2){x.x+=dl;}
    if(x.d==3){x.y+=dl;}
    if(x.d==4){x.y-=dl;}
}
void solve(void) {
    cin>>N>>M>>K;
    vector<shark>v;
    for(int i=0;i<K;i++){
        int x,y,s,d,z;
        cin>>x>>y>>s>>d>>z;
        v.push_back({x,y,s,d,z});
    }
    v.push_back({-1,-2,0,0,0});
    v.push_back({-1,-3,0,0,0});
    v.push_back({-1,-1,0,0,0});
    int answer=0;
    for(int i=1;i<=M;i++){
        //find
        sort(all(v),[&](shark x,shark y){
            if(x.x==y.x and x.y==y.y)return x.z>y.z;
            if(x.y==y.y)return x.x<y.x;
            return x.y<y.y;
        });
        shark tmp={-1,i,0,0,0};
        int ind=lower_bound(all(v),tmp,[&](shark x,shark y){
            if(x.x==y.x and x.y==y.y)return x.z>y.z;
            if(x.y==y.y)return x.x<y.x;
            return x.y<y.y;
        })-v.begin();
        // ind--;
        if(ind<v.size() and v[ind].y==i){
            answer+=v[ind].z;
            v[ind]={-1,-1,0,0,0};
        }
        //simul
        for(int j=0;j<v.size();j++)simul(v[j]);
        //eating
        sort(all(v),[&](shark x,shark y){
            if(x.x==y.x and x.y==y.y)return x.z>y.z;
            if(x.x==y.x)return x.y<y.y;
            return x.x<y.x;
        });
        for(int j=v.size()-1;j>0;j--){
            if(v[j].x==v[j-1].x and v[j].y==v[j-1].y)v[j]={-1,-1,0,0,0};
        }
        //
        // for(auto c:v){
        //     cout<<c.x<<" "<<c.y<<" "<<c.z<<"\n";
        // }
        // cout<<"A\n";
        
    }
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}