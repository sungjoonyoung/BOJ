//https://velog.io/@kguswo/BOJ15576%ED%81%B0-%EC%88%98-%EA%B3%B1%EC%85%89-2-BOJ22289%ED%81%B0-%EC%88%98-%EA%B3%B1%EC%85%88-3-C-Java#%EB%AC%B8%EC%A0%9C%ED%92%80%EC%9D%B4-%EA%B5%AC%ED%98%84
//https://invrtd-h.tistory.com/70
//금방 자력으로 만들어 풀겠습니다


#include<iostream>
#include<vector>
#include<complex>
#include<cmath>
#include<string>
using namespace std;
using cd = complex<double>;
const double pi = acos(-1);
vector<cd> fft(const vector<cd>& a, int pol) {
    int n = 1;
    const int a_sz = static_cast<int>(a.size());
    while (n < a_sz) {
        n <<= 1;
    }

    vector<cd> r(n);
    for (int i = 0; i < n; ++i) {
        int s = 0;
        for (int b = 1, d = n / 2; b <= n; b <<= 1, d >>= 1) {
            if (b & i) {
                s += d;
            }
        }
        r[s] = i < a_sz ? a[i] : 0;
    }

    for (int mte = 2; mte <= n; mte <<= 1) {
        cd we = exp(cd(0, pol * 2 * pi / mte));
        for (int i = 0; i < n; i += mte) {
            cd w = 1;
            for (int j = i; j < i + mte / 2; ++j, w *= we) {
                int j2 = j + mte / 2;
                cd temp1 = r[j], temp2 = r[j2];
                r[j] = temp1 + w * temp2;
                r[j2] = temp1 - w * temp2;
            }
        }
    }

    if (pol == -1) {
        for (auto& c : r) {
            c /= n;
        }
    }

    return r;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;

    vector<cd> ac, bc;
    int n = 2;
    while (n < a.size() + b.size())n *= 2;
    ac.resize(n);
    bc.resize(n);
    
    for (int i = 0; i < a.size(); i++)ac[i] = a[a.size() - i - 1] - '0';
    for (int i = 0; i < b.size(); i++)bc[i] = b[b.size() - i - 1] - '0';
    ac = fft(ac, 1);
    bc = fft(bc, 1);

    for (int i = 0; i < n; i++) ac[i] *= bc[i];
    ac = fft(ac, -1);

    vector<int> answer(n);
    for (int i = 0; i < n; i++)answer[i] = (int)round(ac[i].real());
    for (int i = 0; i < answer.size() - 1; i++) {
        answer[i + 1] += answer[i] / 10;
        answer[i] %= 10;
    }

    int idx = answer.size() - 1;
    while (idx > 0 && answer[idx] == 0) idx--;
    for (; idx >= 0; idx--) cout << answer[idx];
    cout << "\n";
}
