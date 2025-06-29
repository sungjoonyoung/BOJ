#include <iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    cout<<fixed;
    cout.precision(0);
    while(N--){
        double T,A,B,C;
        cin>>T>>A>>B>>C;
        int key=1;
        if(A<(double)35*30/100)key=0;
        if(B<(double)25*30/100)key=0;
        if(C<(double)40*30/100)key=0;
        if(A+B+C<55)key=0;
        if(key)cout<<T<<" "<<A+B+C<<" PASS\n";
        else cout<<T<<" "<<A+B+C<<" FAIL\n";
    }
}