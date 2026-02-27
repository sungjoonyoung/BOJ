#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int N;cin>>N; // 필요 없겠죠?
	string str;cin>>str;
    int answer=0;
    for(int i=0;i<str.size();i++){
        answer+=str[i]-'0';
    }
    cout<<answer;
}