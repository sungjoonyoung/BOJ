#include<iostream>
using namespace std;
long long many[41][2];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, tmp;
    cin >> N;
    many[0][0] = 1;
    many[1][1] = 1;
    for (int i = 0; i < 40; i++) {
        many[2 + i][0] = many[1 + i][0] + many[0 + i][0];
        many[2 + i][1] = many[1 + i][1] + many[0 + i][1];
    }
    

    while (N--) {
        cin >> tmp;
        cout << many[tmp][0]<<" "<<many[tmp][1]<<"\n";
    }
}