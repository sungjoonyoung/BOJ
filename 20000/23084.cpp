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
int code['z'-'a'+1];
int tmp['z'-'a'+1];
void solve(void) {
    string ori;cin>>ori;
    int N;cin>>N;
    for(auto c:ori)code[c-'a']++;
    while(N--){
        [&](){
            for(int i=0;i<'z'-'a'+1;i++)tmp[i]=0;
            string str;cin>>str;
            int l=0;int r=0;
            for(r=0;r<ori.size();r++){
                if(r==str.size()){cout<<"NO\n";return;}
                tmp[str[r]-'a']++;
            }
            r--;
            tmp[str[r]-'a']--;
            while(r<str.size()){
                tmp[str[r]-'a']++;
                int e=0;
                for(int i=0;i<'z'-'a'+1;i++)e+=abs(tmp[i]-code[i]);
                if(str.size()==ori.size() and e==2){cout<<"YES\n";return;}
                if(str.size()>ori.size() and e<=2){cout<<"YES\n";return;}
                tmp[str[l]-'a']--;
                l++;r++;
            }
            cout<<"NO\n";
        }();
        
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}