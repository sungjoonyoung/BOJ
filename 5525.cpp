#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    string str;
    cin>>N>>M>>str;
    int answer=0;
    int combo=0;
    for(int i=0;i<str.size()-2;i++){
        if(str[i]==str[i+2] and str[i]=='I' and str[i+1]=='O'){
            combo++;
            if(combo>=N)answer++;
            i++;
        }
        else combo=0;
    }
    cout<<answer;
}