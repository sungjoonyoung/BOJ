#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=0;
    for(int i=0;i<4;i++){
        string str;
        cin>>str;
        int in;
        cin>>in;
        if(str=="Es")answer+=in*21;
        else answer+=in*17;
    }
    cout<<answer;
}