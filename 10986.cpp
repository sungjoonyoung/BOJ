#include <iostream>

using namespace std;
int slic[1000];
int arrsum[1000000];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    int M, tmp, key;
    int tmpsum;
    tmpsum = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        tmp = tmp % M;
        tmpsum += tmp;
        tmpsum = tmpsum % M;
        arrsum[i] = tmpsum;
    }
    long long count = 0;

    for (int i = 0; i < N; i++) {
        if (arrsum[i] % M == 0) {
            count++;
            count += slic[0];
            slic[0]++;
        }
        else {
            key = arrsum[i] % M;
            count += slic[key];
            slic[key]++;
        }
    }
    cout << count;
}