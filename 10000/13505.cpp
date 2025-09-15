#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int ind=2;
int trie[2][7'000'000];
string int_to_str(int x){
    string tmp;
    for(int i=30;i>=0;i--)tmp.push_back(((x&(1<<i))>0)+'0');
    return tmp;
}
void update_dfs(string str, int e, int i){
    if(e<0)return;

    int op=str[30-e]-'0'; //element
    if(!trie[op][i]){
        trie[op][i]=ind;
        ind++;
        update_dfs(str,e-1,trie[op][i]);   
    }
    else{
        update_dfs(str,e-1,trie[op][i]);
    }
}
int xor_find(string str, int e, int i){
    if(e<0)return 0;
    int op=str[30-e]-'0'; //element
    if(trie[op^1][i])return xor_find(str,e-1,trie[op^1][i])+(1<<e);
    else return xor_find(str,e-1,trie[op][i]);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    vector<int> v(N);
    int answer=0;
    for(int i=0;i<N;i++)cin>>v[i];
    for(int i=0;i<N;i++)update_dfs(int_to_str(v[i]),30,1);
    for(int i=0;i<N;i++)answer=max(xor_find(int_to_str(v[i]),30,1),answer);
    cout<<answer;
}