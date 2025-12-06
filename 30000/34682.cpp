#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int A[5000];
int B[5000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;

    if (s.size() & 1) {
        cout << -1;
        return 0;
    }

    for (int i = 3; i < s.size(); i += 2) {
        if (s[i-2] == s[i]) {
            cout << -1;
            return 0;
        }
    }

    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == '0') {
            cout << -1;
            return 0;
        }
    }
    

    // 0으로 시작하는 경우
    if (s[1] == '0') {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < s.size(); i += 2) {
        for (int j = 0; j < s[i]-'0'; j++) {
            cout << s[i+1];
        }
    }
}