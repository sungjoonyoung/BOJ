#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
int ori_ch[10][10];
int ch[10][10];
int ori_zz[12][12];
int zz[12][12];
vector<int> arr[10][12];
vector<pii> v;
vector<pair<int,string>> inv;

void solve(void){
    int N;cin>>N;
    for(int i=0;i<10;i++)for(int j=0;j<10;j++)cin>>ch[i][j];
    for(int i=0;i<12;i++)for(int j=0;j<12;j++)cin>>zz[i][j];
    for(int i=0;i<N;i++){
        int in;cin>>in;
        string str;cin>>str;
        inv.push_back({in,str});
    }
    // sort(all(inv),greater<pair<int,string>>);
    sort(inv.begin(),inv.end(),greater<pair<int,string>>());
    for(int i=0;i<N;i++){
        int in=inv[i].first;
        string str=inv[i].second;
        // cout<<in<<" "<<str<<"\n";
        arr[str[0]-'0'][str[1]-'A'].push_back(in);
    }
    for(int i=0;i<10;i++)for(int j=0;j<12;j++)v.push_back({i,j}); // 코디네이트
    int answer=0;
    for(int x=0;x<v.size();x++)for(int y=x;y<v.size();y++)for(int z=y;z<v.size();z++){
        int xx=v[x].first;int xy=v[x].second;
        int yx=v[y].first;int yy=v[y].second;
        int zx=v[z].first;int zy=v[z].second;
        int tmp=0;
        if(x==y and y==z){
            if(arr[xx][xy].size()<3)continue;
            tmp+=arr[xx][xy][0];
            tmp+=arr[xx][xy][1];
            tmp+=arr[xx][xy][2];
        }
        else if(x==y){
            if(arr[xx][xy].size()<2)continue;
            if(arr[zx][zy].size()<1)continue;
            tmp+=arr[xx][xy][0];
            tmp+=arr[xx][xy][1];
            tmp+=arr[zx][zy][0];
        }
        else if(y==z){
            if(arr[yx][yy].size()<2)continue;
            if(arr[xx][xy].size()<1)continue;
            tmp+=arr[yx][yy][0];
            tmp+=arr[yx][yy][1];
            tmp+=arr[xx][xy][0];
        }
        else{
            if(arr[xx][xy].size()<1)continue;
            if(arr[yx][yy].size()<1)continue;
            if(arr[zx][zy].size()<1)continue;
            tmp+=arr[xx][xy][0];
            tmp+=arr[yx][yy][0];
            tmp+=arr[zx][zy][0];
        }
        tmp+=ch[xx][yx];
        tmp+=ch[yx][zx];
        tmp+=ch[zx][xx];
        tmp+=zz[xy][yy];
        tmp+=zz[yy][zy];
        tmp+=zz[zy][xy];
        // cout<<xx<<xy<<" "<<
        answer=max(answer,tmp);
    }
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}