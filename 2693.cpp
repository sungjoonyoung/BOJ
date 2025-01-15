#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        for (int i=0;i<10;i++){
            int in;
            cin>>in;
            v.push_back(in);
        }
        sort(v.begin(),v.end());
        cout<<v[7]<<"\n";
        v.clear();
    }
}