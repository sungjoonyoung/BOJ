#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T,X;
    cin>>T>>X;
    int N;
    cin>>N;
    int count=0;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        while(x--){
            int tmp;
            cin>>tmp;
            if(tmp==X)count++;
        }
    }
    if(count==N)cout<<"YES";
    else cout<<"NO";
}