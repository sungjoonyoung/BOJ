#include<stdio.h>
#include<vector>
#include<iostream>
#include<map>
using namespace std;
vector<int> v;
int main(void){
    int T;
    //scanf("%d",&T);
    cin>>T;
    while(T--){
        int N;
        //scanf("%d",&N);
        cin>>N;
        v.clear();
        v.resize(N);
        //for(int i=0;i<N;i++)scanf("%d",&v[i]);
        for(int i=0;i<N;i++)cin>>v[i];
        for(int i=1;;i++){
            map<int,int> arr;
            int key=0;
            for(int j=0;j<v.size();j++){
                arr[v[j]%i]++;
                if(arr[v[j]%i]>1){
                    key=1;
                    break;
                }
            }
            if(key)continue;
            //printf("%d\n",i);
            cout<<i<<"\n";
            break;
        }
    }
}