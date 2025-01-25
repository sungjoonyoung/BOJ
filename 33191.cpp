#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int x;
    cin>>x;
    if(x<=N){
        cout<<"Watermelon";
        return 0;
    }
    cin>>x;
    if(x<=N){
        cout<<"Pomegranates";
        return 0;
    }
    cin>>x;
    if(x<=N){
        cout<<"Nuts";
        return 0;
    }
    cout<<"Nothing";
}