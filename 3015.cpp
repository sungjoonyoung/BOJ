#include<iostream>
#include<vector>
#include<utility>
using namespace std;
vector<int> v;
vector<pair<int,int>> s;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    long long count=0;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    for(int i=0;i<N;i++){
        int tmp=v[i];
        if(s.empty()){
            s.push_back({tmp,1});
            continue;
        }
        int l=0;
        while(!s.empty() and s.back().first<=tmp){
            if(s.back().first==tmp){
                l+=s.back().second;
                count+=s.back().second;
            }
            else count+=s.back().second;
            s.pop_back();
        }
        s.push_back({tmp,l+1});
    }
    s.clear();
    for(int i=N-1;i>=0;i--){
        int tmp=v[i];
        if(s.empty()){
            s.push_back({tmp,1});
            continue;
        }
        int l=0;
        while(!s.empty() and s.back().first<tmp){
            count+=s.back().second;
            s.pop_back();
        }
        s.push_back({tmp,l+1});
    }
    cout<<count;
}