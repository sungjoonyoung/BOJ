#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int answer=0;
    while(T--){
        string str;
        cin>>str;
        answer++;
        if(str.size()<2)continue;
        else for(int i=0;i<str.size()-1;i++){
            if(str[i]=='C' and str[i+1]=='D'){
                answer--;
                break;
            }
        }
    }
    cout<<answer;
}