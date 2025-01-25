#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    long long tmp=2;
    for(int i=0;i<N;i++){
        tmp+=tmp-1;
    }
    cout<<tmp*tmp;
}