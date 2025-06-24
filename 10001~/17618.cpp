#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=0;
    for(int i=1;i<=N;i++){
        int tmp=i;
        int n=0;
        while(tmp){
            n+=tmp%10;
            tmp/=10;
        }
        answer+=(i%n==0);
    }
    cout<<answer;
}