#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,C;
    cin>>N>>C;
    long double sum=0;
    long double bed=0;
    long double val=0;
    cout<<fixed;
    cout.precision(10);
    while(N--){
        long long tmp;
        string str;
        cin>>tmp>>str;
        sum+=tmp;
        if(str=="bedroom")bed+=tmp;
        if(str=="balcony")val+=tmp;
    }
    cout<<(long long)sum<<"\n";
    cout<<(long long)bed<<"\n";
    cout<<(sum-val/2)*C;
}