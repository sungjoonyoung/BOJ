#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long answer=0;
    int N;
    cin>>N;
    while(N--){
        int a,b;
        cin>>a>>b;
        if(a==136)answer+=1000;
        if(a==142)answer+=5000;
        if(a==148)answer+=10000;
        if(a==154)answer+=50000;
    }
    cout<<answer;
}