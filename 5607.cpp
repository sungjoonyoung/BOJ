#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int a,b;
    a=b=0;
    for(int i=0;i<N;i++){
        int l,r;
        cin>>l>>r;
        if(l<r)b+=l+r;
        else if(l>r)a+=l+r;
        else {
            a+=l;
            b+=r;
        }
    }
    cout<<a<<" "<<b;
}