#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    cin.ignore();
    while(N--){
        string str;
        getline(cin,str);
        v.push_back(str);
    }
    cin>>N;
    while(N--){
        int in;
        cin>>in;
        if(in<1 or in>v.size())cout<<"Rule "<<in<<": No such rule";
        else cout<<"Rule "<<in<<": "<<v[in-1];
        cout<<"\n";
    }
}