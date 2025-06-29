#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count=0;
    cout<<fixed;
    cout.precision(1);
    while(1){
        int N;
        cin>>N;
        count++;
        if(N==0)break;
        long double answer=0;
        for(int i=1;i<=N;i++){
            int in;
            cin>>in;
            if(N%2==0){
                if(i==N/2)answer+=in;
                if(i==N/2+1)answer+=in;
            }
            else{
                if(i==N/2+1)answer+=in;
            }
            
        }
        if(N%2==0)cout<<"Case "<<count<<": "<<answer/2<<"\n";
        else cout<<"Case "<<count<<": "<<answer<<"\n";
        
    }
}