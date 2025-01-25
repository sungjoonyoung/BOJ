#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v(4);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<4;i++)cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[0]*v[2];
}