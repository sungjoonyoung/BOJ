#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        long double N;
        cin>>N;
        if(N==0.00)break;
        long double table=0;
        for(int i=1;;i++){
            table+=(long double)1/(i+1);
            if(table>=N){
                cout<<i<<" card(s)\n";
                break;
            }
        }
    }
}