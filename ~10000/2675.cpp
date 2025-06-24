#include<iostream>
#include<string>
using namespace std;
int main(void) {
    int N;
    cin >> N;
    while (N--) {
        int in;
        cin >> in;
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < in; j++)cout << str[i];
        }
        cout << "\n";
    }
}