#include<iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    a = (a * b) * 10 / 2;

    cout << a / 10 << "." << a % 10;


}