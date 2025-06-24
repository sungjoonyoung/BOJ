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
        while(n--){
            int in;
            cin>>in;
            answer+=(in/m);
        }
        cout<<answer<<"\n";
    }
}