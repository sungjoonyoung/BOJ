#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int in;
        cin>>in;
        while(1){
            in++;
            bool key=1;
            int tmpin=in;
            while(tmpin){
                if(tmpin%10==0){
                    
                    key=0;
                }
                tmpin/=10;
            }
            if(key){
                cout<<in<<"\n";
                break;
            }
        }
    }
}