#include<iostream>
#include<vector>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int maxnum=-1;
        int maxind=0;
        string maxstr;
        for(int i=0;i<N;i++){
            string str;
            int M;
            cin>>str>>M;
            if(M>maxnum){
                maxnum=M;
                maxind=i;
                maxstr=str;
            }
        }
        cout<<maxstr<<"\n";
    }
}