#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=0;
    for(int i=1;;i++){
        int in;
        cin>>in;
        if(cin.eof())break;
        if(in>0)answer++;
    }
    cout<<answer;
}