#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=0;
    for(int i=0;i<N;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c){
            answer=max(answer,10000+a*1000);
        }
        else if(a==b || b==c || c==a){
            if(a==b)answer=max(answer,1000+a*100);
            if(c==b)answer=max(answer,1000+b*100);
            if(a==c)answer=max(answer,1000+a*100);
        }
        else{
            answer=max(answer,100*max(a,max(b,c)));
        }
    }
    cout<<answer;
}