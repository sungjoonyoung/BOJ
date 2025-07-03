// #include<iostream>
// #include<vector>
// #include<complex>
// #include<cmath>
// #include<string>
// using namespace std;
// using cd = complex<long double>;
// const long double pi = acos(-1);
// vector<cd> fft(const vector<cd>& a, int pol) {
//     int n = 1;
//     const int a_sz = static_cast<int>(a.size());
//     while (n < a_sz) {
//         n <<= 1;
//     }

//     vector<cd> r(n);
//     for (int i = 0; i < n; ++i) {
//         int s = 0;
//         for (int b = 1, d = n / 2; b <= n; b <<= 1, d >>= 1) {
//             if (b & i) {
//                 s += d;
//             }
//         }
//         r[s] = i < a_sz ? a[i] : 0;
//     }

//     for (int mte = 2; mte <= n; mte <<= 1) {
//         cd we = exp(cd(0, pol * 2 * pi / mte));
//         for (int i = 0; i < n; i += mte) {
//             cd w = 1;
//             for (int j = i; j < i + mte / 2; ++j, w *= we) {
//                 int j2 = j + mte / 2;
//                 cd temp1 = r[j], temp2 = r[j2];
//                 r[j] = temp1 + w * temp2;
//                 r[j2] = temp1 - w * temp2;
//             }
//         }
//     }

//     if (pol == -1) {
//         for (auto& c : r) {
//             c /= n;
//         }
//     }

//     return r;
// }

// vector<cd> pow_func(vector<cd> x, int K){
//     int n=2;
//     while(n<1001)n*=2;
    
//     vector<cd> tmp=x;
//     vector<cd> answer(n);
//     answer[0]=1;

//     while(K){
//         n<<=1;
//         tmp.resize(n);
//         answer.resize(n);
//         tmp=fft(tmp,1);
//         answer=fft(answer,1);


//         if(K%2)for(int i=0;i<n;i++)answer[i]*=tmp[i];
//         for(int i=0;i<n;i++)tmp[i]*=tmp[i];
//         K/=2;

//         tmp=fft(tmp,-1);
//         answer=fft(answer,-1);
//     }
//     return answer;
// }
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int N,K;
//     cin>>N>>K;
//     vector<cd> a;
//     a.resize(1001*K);


//     int n=2;
//     while (n < a.size())n *= 2;
//     a.resize(n,0);
    
//     for(int i=0;i<N;i++){
//         int in;
//         cin>>in;
//         a[in]=1;
//     }
    
//     a=pow_func(a,K);


//     for(int i=0;i<1001*K;i++)if((int)round(a[i].real())>=1)cout<<i<<" ";
//     // for(int i=0;i<1001*1000;i++)if((int)round(a[i].real())>0)cout<<a[i]<<" ";
//     // cout<<a[15];
//     return 0;
// }


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

vector<cd> pow_func(vector<cd> x, int K){
    int n=2;
    while(n<1001)n*=2;
    
    vector<cd> tmp=x;
    vector<cd> answer(n);
    answer[0]=1;

    while(K){
        n<<=1;
        tmp.resize(n);
        answer.resize(n);
        tmp=fft(tmp,1);
        answer=fft(answer,1);


        if(K&1)for(int i=0;i<n;i++)answer[i]*=tmp[i];
        for(int i=0;i<n;i++)tmp[i]*=tmp[i];
        K>>=1;
        
        tmp=fft(tmp,-1);
        answer=fft(answer,-1);
        for(int i=0;i<n;i++)answer[i]=((int)round(answer[i].real())>=1);
        for(int i=0;i<n;i++)tmp[i]=((int)round(tmp[i].real())>=1);
    }
    return answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K;
    cin>>N>>K;
    vector<cd> a;
    a.resize(1001*K);


    int n=2;
    while (n < a.size())n *= 2;
    a.resize(n,0);
    
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        a[in]=1;
    }
    
    a=pow_func(a,K);

    for(int i=0;i<1001*K;i++)if((int)round(a[i].real())>=1)cout<<i<<" ";
    // for(int i=0;i<1001*1000;i++)if((int)round(a[i].real())>0)cout<<a[i]<<" ";
    // cout<<a[15];
    return 0;
}