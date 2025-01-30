#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(1){
        int N;
        cin>>N;
        if(N==-1)break;
        int answer=0;
        int before=0;
        while(N--){
            int v,n;
            cin>>v>>n;
            answer+=v*(n-before);
            before=n;
        }
        cout<<answer<<" miles\n";
    }
}