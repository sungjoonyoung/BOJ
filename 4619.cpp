#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int B,N;
        cin>>B>>N;
        if(!(B||N))break;
        for(int i=1;;i++){
            if(pow(i,N)>B){
                if(B-pow(i-1,N)<pow(i,N)-B)cout<<i-1<<"\n";
                else cout<<i<<"\n";
                break;
            }
        }
    }
}