#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main(void){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        v.clear();
        cout<<"Class "<<i<<"\n";
        int N;
        cin>>N;
        v.resize(N);
        for(int i=0;i<N;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int maxnum=0;
        for(int i=0;i<v.size()-1;i++)maxnum=max(maxnum,v[i+1]-v[i]);
        cout<<"Max "<<v.back()<<", Min "<<v.front()<<", Largest gap "<<maxnum<<"\n";
    }
}