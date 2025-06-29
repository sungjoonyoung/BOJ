#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    long long answer=0;
    for(int i=1;i<=T;i++){
        int tmp=i;
        while(tmp){
            if(tmp%10!=0 and tmp%10%3==0)answer++;
            tmp/=10;
        }
    }
    cout<<answer;
}