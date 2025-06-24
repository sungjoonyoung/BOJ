#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v(3);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        for(int i=0;i<3;i++)cin>>v[i];
        sort(v.begin(),v.end());
        if(v[0]+v[1]<=v[2])cout<<"Case #"<<i<<": invalid!\n";
        else if(v[0]==v[1] and v[1]==v[2])cout<<"Case #"<<i<<": equilateral\n";
        else if(v[0]==v[1] or v[1]==v[2] or v[0]==v[2])cout<<"Case #"<<i<<": isosceles\n";
        else cout<<"Case #"<<i<<": scalene\n";
    }
}