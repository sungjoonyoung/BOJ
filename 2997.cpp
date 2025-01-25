#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v(3);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<3;i++)cin>>v[i];
    sort(v.begin(),v.end());
    if(v[2]-v[1]==v[1]-v[0])cout<<v[2]-v[1]+v[2];
    if(v[2]-v[1]<v[1]-v[0])cout<<v[2]-v[1]+v[0];
    if(v[2]-v[1]>v[1]-v[0])cout<<v[1]-v[0]+v[1];
}