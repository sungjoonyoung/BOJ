#include<iostream>
using namespace std;
double arr[2];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<2;i++){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        arr[i]+=a*13+b*7+c*5+d*3+e*3+f*2;
    }
    if(arr[0]>arr[1]+1.5)cout<<"cocjr0208";
    else cout<<"ekwoo";
}