#include<iostream>
#include<string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, b = 0, s = 0;
    string str;
    cin >> N;
    cin >> str;
    for (auto a : str) {
        if (a == 'b')b++;
        if (a == 's')s++;
    }
    if (b == s)cout << "bigdata? security!";
    if (b < s)cout << "security!";
    if (b > s)cout << "bigdata?";


}