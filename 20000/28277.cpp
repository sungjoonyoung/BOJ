#include<iostream>
#include<set>
using namespace std;
set<int> arr[500'000];
int P[500'000];
void _merge(void){
    int a,b;
    cin>>a>>b;
    a--;b--;
    if(arr[P[a]].size()>=arr[P[b]].size()){
        arr[P[a]].insert(arr[P[b]].begin(),arr[P[b]].end());
        arr[P[b]].clear();
    }
    else{
        arr[P[b]].insert(arr[P[a]].begin(),arr[P[a]].end());
        arr[P[a]].clear();
        swap(P[a],P[b]);
    }
}
void size_func(void){
    int a;
    cin>>a;
    a--;
    cout<<arr[P[a]].size()<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,Q;
    cin>>N>>Q;
    for(int i=0;i<N;i++){
        int M;
        cin>>M;
        for(int j=0;j<M;j++){
            int in;
            cin>>in;
            arr[i].insert(in);
        }
        P[i]=i;
    }
    // cout<<arr[1].size()<<"a";
    while(Q--){
        int op;
        cin>>op;
        if(op==1)_merge();
        else size_func();
    }
}