#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        int answer=0;
        for(int a=1;a<n-1;a++){
            for(int b=a+1;b<n;b++){
                if((a*a+b*b+m)%(a*b)==0)answer++;
            }
        }
        cout<<answer<<"\n";
    }
    
}