#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
/*
1
1, 0 -> 불가능

2
00
01
11
10
->체크

3
000
001
010
100
011
110
101
111
->체크

4
0000
1 개일 떄는 모두 가능
2 개일 떄는 보두 가능
3 개 모두 가능
4일 떄는 모두 가능
-> 모두 가능

00000
1 모두 가능
2 모두 가능
3 모두 가능
4 
-> 모두 가능

000000
1
2
3


*/
int arr[300'000];
int N,Q;
void func1(void){
    int x;cin>>x;x--;
    arr[x]^=1;
}
void func2(void){
    int l,r;cin>>l>>r;
    l--;r--;
    int length=r-l+1;
    if(length==1)cout<<"NO";
    else if(length==2){
        if(arr[l]==arr[r])cout<<"YES";
        else cout<<"NO";
    }
    else if(length==3){
        /*
        010
        101
        불가
        */
        if(arr[l+0]==0 and arr[l+1]==1 and arr[l+2]==0)cout<<"NO";
        else if(arr[l+0]==1 and arr[l+1]==0 and arr[l+2]==1)cout<<"NO";
        else cout<<"YES";
    }
    else cout<<"YES";


    cout<<"\n";
}
void solve(void){
    cin>>N>>Q;
    for(int i=0;i<N;i++){
        char c;cin>>c;
        arr[i]=c-'0';
    }
    while(Q--){
        int op;cin>>op;
        if(op==1)func1();
        else func2();
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}