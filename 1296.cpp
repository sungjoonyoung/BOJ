#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> v;
vector<int> countv;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string Y;
    cin>>Y;
    int N;
    cin>>N;
    while(N--){
        string in;
        cin>>in;
        v.push_back(in);
    }
    sort(v.begin(),v.end());
    int L=0;
    int O=0;
    int V=0;
    int E=0;
    for(auto c:Y){
        if(c=='L')L++;
        if(c=='O')O++;
        if(c=='V')V++;
        if(c=='E')E++;
    }
    int answer=0;
    for(int i=0;i<v.size();i++){
        int tmpL=L;
        int tmpO=O;
        int tmpV=V;
        int tmpE=E;
        for(auto c:v[i]){
            if(c=='L')tmpL++;
            if(c=='O')tmpO++;
            if(c=='V')tmpV++;
            if(c=='E')tmpE++;
        }
        int tmp=1;
        tmp*=tmpL+tmpO;
        tmp%=100;
        tmp*=tmpL+tmpV;
        tmp%=100;
        tmp*=tmpL+tmpE;
        tmp%=100;
        tmp*=tmpO+tmpV;
        tmp%=100;
        tmp*=tmpO+tmpE;
        tmp%=100;
        tmp*=tmpV+tmpE;
        tmp%=100;
        countv.push_back(tmp);
        answer=max(answer,tmp);
    }
    for(int i=0;i<countv.size();i++)if(countv[i]==answer){
        cout<<v[i];
        return 0;
    }
}