#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double x,y;
    cin>>x>>y;
    long double answer=(long double)1000/y*x;
    int N;
    cin>>N;
    while(N--){
        cin>>x>>y;
        answer=min(answer,(long double)1000/y*x);
    }
    cout<<answer;
}