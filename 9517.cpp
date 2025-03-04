#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int N;
    cin>>N;
    int answer=210;
    while(N--){
        int in;
        cin>>in;
        char c;
        cin>>c;
        if(c=='T'){
            answer-=in;
            if(answer<=0){
                cout<<T;
                return 0;
            }
            T++;
            if(T==9)T=1;
        }
        else{
            answer-=in;
            if(answer<=0){
                cout<<T;
                return 0;
            }
        }
        
    }
}