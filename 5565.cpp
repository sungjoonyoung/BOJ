#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum;
    cin>>sum;
    for(int i=0;i<9;i++){
        int in;
        cin>>in;
        sum-=in;
    }
    cout<<sum;
}