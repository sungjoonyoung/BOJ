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
    long long N,L,M,W;
    cin>>N>>L>>M>>W;
    int n=2;
    while(n<N*2)n<<=1;
    vector<cd> a[100],b[100];
    for(int i=0;i<M;i++){
        a[i].resize(n);
        for(int j=0;j<N;j++)cin>>a[i][N-j-1];
    }
    for(int i=0;i<M;i++){
        b[i].resize(n);
        for(int j=0;j<L;j++)cin>>b[i][j];
    }
    for(int i=0;i<M;i++){
        a[i]=fft(a[i],1);
        b[i]=fft(b[i],1);
        for(int j=0;j<n;j++)a[i][j]*=b[i][j];
        a[i]=fft(a[i],-1);
    }
    int answer=0;
    for(int i=N-1;i>N-1-(N-L+1);i--){
        long long tmp=0;
        for(int h=0;h<M;h++){
            tmp+=(int)round(a[h][i].real());
        }
        //cout<<tmp<<"\n";
        answer+=(tmp>W);
    }
    cout<<answer;
}