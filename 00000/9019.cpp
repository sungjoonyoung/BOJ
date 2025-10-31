#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
queue<pair<int,string>> q;
int visited[10'001];
void solve(int x){
    while(!q.empty())q.pop();
    int A,B;cin>>A>>B;
    q.push({A,""});
    while(!q.empty()){
        int curn=q.front().first;
        string s=q.front().second;
        q.pop();
        int tmp;

        if(curn==B){cout<<s<<"\n";return;}
        
        //L
        tmp=curn*10+curn/1000;tmp%=10'000;
        if(visited[tmp]!=x){
            q.push({tmp,s+'L'});
            visited[tmp]=x;
        }
        //R
        tmp=curn/10+(curn%10)*1000;tmp%=10'000;
        if(visited[tmp]!=x){
            q.push({tmp,s+'R'});
            visited[tmp]=x;
        }
        //D
        tmp=curn*2;tmp%=10'000;
        if(visited[tmp]!=x){
            q.push({tmp,s+'D'});
            visited[tmp]=x;
        }
        //S
        tmp=curn+10'000-1;tmp%=10'000;
        if(visited[tmp]!=x){
            q.push({tmp,s+'S'});
            visited[tmp]=x;
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    for(int i=1;i<=T;i++)solve(i);
}