#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    v.push_back(0);
    int i=0;
    while(v.size()!=100'001){
        i++;
        int tmp=i;
        int t,f;
        t=f=0;
        while(tmp%3==0){
            tmp/=3;
            t++;
        }
        while(tmp%5==0){
            tmp/=5;
            f++;
        }
        if(abs(t-f)%3==0)v.push_back(i);
    }
    
    int T;
    cin>>T;
    while(T--){
        int in;
        cin>>in;
        cout<<v[in]<<"\n";
    }
}