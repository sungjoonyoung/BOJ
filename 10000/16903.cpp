#include<iostream>
#include<cmath>
using namespace std;
int ind=2;
int trie[2][7'000'000];
int cnt[7'000'000];
string int_to_str(int x){
    string tmp;
    for(int i=30;i>=0;i--)tmp.push_back(((x&(1<<i))>0)+'0');
    return tmp;
}
void update_dfs(string str, int e, int i){ 
    cnt[i]++;
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
void delete_dfs(string str, int e, int i){ 
    cnt[i]--;
    if(e<0)return;

    int op=str[30-e]-'0'; //element
    delete_dfs(str,e-1,trie[op][i]);
}
int xor_find(string str, int e, int i){
    if(e<0)return 0;
    int op=str[30-e]-'0'; //element
    if(cnt[trie[op^1][i]])return xor_find(str,e-1,trie[op^1][i])+(1<<e);
    else return xor_find(str,e-1,trie[op][i]);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cout<<log2(1'000'000'000);//29.897411
    //cout<<(1<<31)<<"\n";
    int Q;
    cin>>Q;
    // cout<<int_to_str(100)<<"\n";
    update_dfs(int_to_str(0),30,1);
    while(Q--){
        // cout<<"\n";
        int op;
        cin>>op;
        int in;
        cin>>in;
        if(op==1)update_dfs(int_to_str(in),30,1);
        else if(op==2)delete_dfs(int_to_str(in),30,1);
        else cout<<xor_find(int_to_str(in),30,1)<<"\n";
    }
}