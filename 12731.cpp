#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
void solve(void){
    priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<>> pq;
    priority_queue<int,vector<int>,greater<>> a,b;
    int T;
    cin>>T;
    int N,M;
    cin>>N>>M;
    while(N--){
        int h,m,hh,mm;
        char tmp;
        cin>>h>>tmp>>m>>hh>>tmp>>mm;
        m+=60*h;
        mm+=60*hh;
        pq.push({{m,mm},1});
    }
    while(M--){
        int h,m,hh,mm;
        char tmp;
        cin>>h>>tmp>>m>>hh>>tmp>>mm;
        m+=60*h;
        mm+=60*hh;
        pq.push({{m,mm},2});
    }
    int x,y;
    x=y=0;
    while(!pq.empty()){
        int s,e,w;
        s=pq.top().first.first;
        e=pq.top().first.second;
        w=pq.top().second;
        pq.pop();
        if(w==1){
            if(a.empty()){
                b.push(e);
                x++;
            }
            else{
                if(a.top()+T<=s){
                    a.pop();
                    b.push(e);
                }
                else{
                    b.push(e);
                    x++;
                }
            }
        }
        else{
            if(b.empty()){
                a.push(e);
                y++;
            }
            else{
                if(b.top()+T<=s){
                    b.pop();
                    a.push(e);
                }
                else{
                    a.push(e);
                    y++;
                }
            }
        }
    }
    cout<<x<<" "<<y;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }
}