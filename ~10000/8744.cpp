#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        if(in==0){
            if(zero==0)zero=1;
        }
        if(in==1){
            if(zero==1)zero=2;
            if(one==0)one=1;
        }
        if(in==2){
            if(zero==2)zero=3;
            if(one==1)one=2;
            if(two==0)two=1;
        }
    }
    cout<<max(zero,max(one,two));
}