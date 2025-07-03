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
    int N,K;
    cin>>N>>K;
    int n=2;
    while(n<N*2)n<<=1;
    vector<cd> a_rock,a_paper,a_scissors;
    a_rock.resize(n);
    a_paper.resize(n);
    a_scissors.resize(n);
    vector<cd> b_rock,b_paper,b_scissors;
    b_rock.resize(n);
    b_paper.resize(n);
    b_scissors.resize(n);

    for(int i=0;i<N;i++){
        char c;
        cin>>c;
        if(c=='R')a_rock[N-i-1]=1;
        if(c=='S')a_scissors[N-i-1]=1;
        if(c=='P')a_paper[N-i-1]=1;
    }
    for(int i=0;i<K;i++){
        char c;
        cin>>c;
        if(c=='R')b_rock[i]=1;
        if(c=='S')b_scissors[i]=1;
        if(c=='P')b_paper[i]=1;
    }

    a_rock=fft(a_rock,1);
    a_scissors=fft(a_scissors,1);
    a_paper=fft(a_paper,1);
    b_rock=fft(b_rock,1);
    b_scissors=fft(b_scissors,1);
    b_paper=fft(b_paper,1);
    for(int i=0;i<n;i++)a_rock[i]*=b_paper[i];
    for(int i=0;i<n;i++)a_scissors[i]*=b_rock[i];
    for(int i=0;i<n;i++)a_paper[i]*=b_scissors[i];

    a_rock=fft(a_rock,-1);
    a_scissors=fft(a_scissors,-1);
    a_paper=fft(a_paper,-1);
    int answer=0;
    for(int i=(N-1);i>(N-1)-N;i--){
        int tmp=0;
        tmp+=(int)round(a_rock[i].real());
        tmp+=(int)round(a_scissors[i].real());
        tmp+=(int)round(a_paper[i].real());
        //cout<<tmp<<"\n";
        answer=max(answer,tmp);
    }
    cout<<answer;
}