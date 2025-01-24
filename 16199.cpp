#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Y,M,D;
    int YY,MM,DD;
    cin>>Y>>M>>D>>YY>>MM>>DD;
    if(MM>M)cout<<YY-Y;
    else if(MM==M){
        if(DD>=D)cout<<YY-Y;
        else cout<<YY-Y-1;
    }
    else cout<<YY-Y-1;
    cout<<"\n"<<YY-Y+1<<"\n"<<YY-Y<<"\n";
}