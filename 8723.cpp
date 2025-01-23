#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v(3);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(),v.end());
    if(v[0]==v[1] && v[1]==v[2])cout<<2;
    else if(v[2]*v[2]==v[1]*v[1]+v[0]*v[0])cout<<1;
    else cout<<0;
}