#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,D;
        cin>>N>>D;
        int answer=0;
        while(N--){int v,f,c;
        cin>>v>>f>>c;
        //v*c/f>=D;
        if(v*f>=D*c)answer++;}
        cout<<answer<<"\n";
    }
}