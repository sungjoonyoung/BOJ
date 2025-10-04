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
int arr[100];
string str;
void printff(void){
    for(int i=0;i<str.size();i++)if(arr[i])cout<<str[i];
    cout<<"\n";
}
int dfs(int x){
    while(1){
        char c='Z'+1;
        int ind=-1;
        for(int i=x;i<str.size();i++){
            if(arr[i])continue;
            if(c>str[i]){
                c=str[i];
                ind=i;
            }
        }
        if(ind==-1)return -1;
        arr[ind]=1;
        printff();
        dfs(ind);
    }
}
void solve(void){
    cin>>str;
    dfs(0);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}