#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int N,L;
vector<string> arr;
vector<int> table;
bool visited[20];
bool key;
void DFS(int x){
    if(key)return;
    if(x==L){
        for(int i=0;i<L;i++)for(int j=0;j<L;j++){
            if(arr[table[i]][j]!=arr[table[j]][i])return;
        }
        string tmp;
        for(int i=0;i<L;i++){
            cout<<arr[table[i]]<<"\n";
        }
        key=1;
        return;
    }
    for(int i=0;i<N;i++){
        if(visited[i])continue;
        table.push_back(i);
        visited[i]=1;
        DFS(x+1);
        table.pop_back();
        visited[i]=0;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>L>>N;
    for(int i=0;i<N;i++){
        string in;
        cin>>in;
        arr.push_back(in);
    }
    sort(arr.begin(),arr.end());
    DFS(0);
    if(!key)cout<<"NONE";
}