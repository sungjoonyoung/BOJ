#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v(3);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        for(int i=0;i<3;i++)cin>>v[i];
        sort(v.begin(),v.end());
        cout<<"Scenario #"<<t<<":\n";
        if(v[0]*v[0]+v[1]*v[1]==v[2]*v[2])cout<<"yes";
        else cout<<"no";
        cout<<"\n\n";
    }
}