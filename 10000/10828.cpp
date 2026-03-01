#include <iostream>
#include <string>
using namespace std;

int arr[10000]; // 배열이구요
int ind = 0;    // 아까 그 빨간 인덱스입니다.
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Q; cin >> Q;
    while (Q--) {
        string str; cin >> str;

        if (str == "push") {
            int in; cin >> in;
            arr[ind] = in;
            ind++;
        }

        if (str == "pop") {
            if (ind == 0)cout << "-1\n";
            else {
                cout << arr[ind - 1] << "\n";
                ind--;
            }
        }

        if (str == "size") {
            cout << ind << "\n";
        }

        if (str == "empty") {
            cout << (ind == 0) << "\n"; // 어때요 이 테크닉 많이 쓰죠?
        }

        if (str == "top") {
            if (ind == 0)cout << "-1\n";
            else cout << arr[ind - 1] << "\n";
        }
    }
}