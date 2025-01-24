#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int lim=60+k;
    int answer=0;
    if(n<=lim)answer+=n*1500;
    else {
        answer+=(lim)*1500;
        answer+=(n-lim)*3000;
    }
    cout<<answer;
}