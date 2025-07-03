#include <iostream>
#include <vector>

#define ll __int128_t
using namespace std;
ll R=5;
ll P=4603910272195756033;


ll powf(ll x,ll k){
    ll tmp=x;
    ll answer=1;
    while(k){
        if(k&1)answer=(answer*tmp)%P;
        tmp=(tmp*tmp)%P;
        k>>=1;
    }
    return answer;
}

void NTT(vector<ll>& v, bool inv) {
    int n = v.size();
    
    for (int i = 1, j = 0; i < n; i++) {
        int b = n >> 1;
        while (!((j ^= b) & b)) b >>= 1;
        if (i < j) swap(v[i], v[j]);
    }
    
    ll x = powf(R, (P - 1) / n);
    if (inv) x = powf(x, P - 2);

    vector<ll> root(n >> 1); root[0] = 1;

    for (int i = 1; i < (n >> 1); i++)root[i] = (root[i - 1] * x) % P;
    
    for (int i = 2; i <= n; i <<= 1) {
        ll c = n / i;

        for (int j = 0; j < n; j += i) {
            for (int k = 0, k_len = i >> 1; k < k_len; k++) {
                ll a = v[j | k], b = (v[j | k | k_len] * root[c * k]) % P;

                v[j | k] = (a + b) % P;
                v[j | k | k_len] = (a - b) % P;
                if (v[j | k | k_len] < 0) v[j | k | k_len] += P;
            }
        }
    }

    if (inv) {
        ll t = powf(n, P - 2);

        for (int i = 0; i < n; i++)v[i] = (v[i] * t) % P;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    vector<ll> a,b;
    a.resize(N+1);
    b.resize(M+1);
    for(int i=0;i<N+1;i++){
        int in;
        cin>>in;
        a[i]=in;
    }
    for(int i=0;i<M+1;i++){
        int in;
        cin>>in;
        b[i]=in;
    }
    ll n=2;
    while(n<max(a.size(),b.size())*2)n<<=1;
    a.resize(n);
    b.resize(n);


    NTT(a,0);
    NTT(b,0);
    for(int i=0;i<n;i++)a[i]=(a[i]*b[i])%P;
    NTT(a,1);
    long long answer=0;
    for(int i=0;i<n;i++)answer^=(long long)a[i];
    cout<<answer;
}
