#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    int answer=0;
    for(int i=0;i<N;i++){
        string str;
        cin>>str;
        int count=0;
        for(auto c:str){
            if(c=='O')count++;
        }
        answer+=(count>M-count);
    }
    cout<<answer;
}