#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum=0;
    for(int i=0;i<5;i++){
        int in;
        cin>>in;
        sum+=in;
        v.push_back(in);
    }
    sort(v.begin(),v.end());
    cout<<sum/5<<"\n"<<v[2];
}