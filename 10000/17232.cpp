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
int arr[100][100];
int sum[100][100];
int N,M,T,K,A,B;
void makesum(void){
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        if(j==0)sum[i][j]=arr[i][j];
        else sum[i][j]=sum[i][j-1]+arr[i][j];
    }
}
int countfunc(int x,int y){
    int tmp=0;
    for(int i=x-K;i<=x+K;i++){
        if(i<0 or i>=N)continue;
        int r=min(M-1,y+K);
        int l=max(0,y-K);
        if(l==0)tmp+=sum[i][r];
        else tmp+=sum[i][r]-sum[i][l-1];
    }
    tmp-=arr[x][y];
    return tmp;
}
void game(void){
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        int op=countfunc(i,j);
        if(arr[i][j] and op>=A and op<=B)arr[i][j]=1;
        else if(arr[i][j] and A<op)arr[i][j]=0;
        else if(arr[i][j] and op<B)arr[i][j]=0;
        else if(!arr[i][j] and A<op and op<=B)arr[i][j]=1;
    }
}
void solve(void){
    cin>>N>>M>>T;
    cin>>K>>A>>B;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        char c;cin>>c;
        arr[i][j]=(c=='*');
    }
    while(T--){
        makesum();
        game();
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j])cout<<'*';
            else cout<<'.';
        }
        cout<<"\n";
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
    
}