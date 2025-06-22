#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int answer=0;
    while(T--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==-1 and b==-1 and c==-1)continue;
        if(a!=-1 and b==-1 and c==-1)answer++;
        if(a!=-1 and b!=-1 and c==-1)answer+=(a<=b);
        if(a!=-1 and b!=-1 and c!=-1)answer+=(a<=b and b<=c);
    }
    cout<<answer;
}