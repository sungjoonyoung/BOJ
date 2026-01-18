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
/*
1 4      10
2 7      11
3 44    100
4 47    101
5 74    110
6 77
7 444
8 447
9
10
11
12 
*/
void solve(void) {
    int N;cin>>N;N++;
    for(int i=log2(N)-1;i>=0;i--){
        if((1<<i)&N)cout<<"7";
        else cout<<"4";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}