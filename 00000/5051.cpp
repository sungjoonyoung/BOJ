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
    int N;
    cin>>N;
    int n=2097152;
    vector<cd> a,b;
    a.resize(n);
    b.resize(n);
    for(long long i=1;i<N;i++){
        a[(i*i)%N]=a[(i*i)%N].real()+1;
        b[(i*i*2)%N]=b[(i*i*2)%N].real()+1;
    }

    a=fft(a,1);
    for(int i=0;i<a.size();i++)a[i]*=a[i];
    a=fft(a,-1);
    for(int i=N;i<a.size();i++)a[i%N]=a[i%N].real()+a[i].real();
    long long answer=0;
    for(long long i=1;i<N;i++){
        answer+=((int)round(a[(i*i)%N].real())+(int)round(b[(i*i)%N].real()))/2;
    }
    cout<<answer;
}