#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int tmp=N-99;//97
    cout<<max(99-tmp+1,0);
}