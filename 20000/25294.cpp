#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#include<math.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;

void func1(void){
    int N,X,Y;cin>>N>>X>>Y;
    /*
    껍질 안 쪽이 i (1based) -> 개수 (2i-1)^2-(2i-3)^2->4i^2-4i+1-4i^2+12i-9==8i-8;
    */
    int shell=max(abs(N/2+1-X),abs(N/2+1-Y));
    shell++;
    if(shell==1)cout<<N*N<<"\n";
    else{
        int answer=0;
        answer+=N*N-(shell*2-1)*(shell*2-1);
        /*
        {N/2+1}-i+1   {N/2+1}+i-1
        */
        int big=(N/2+1)-shell+1;
        int small=(N/2+1)+shell-1;
        swap(big,small);
        
        if(X==small and Y<big){
            answer+=(shell-1)*2*0;
            answer+=Y-small+1;
        }
        else if(Y==big and X<big){
            answer+=(shell-1)*2*1;
            answer+=X-small+1;
        }
        else if (X==big and Y>small){
            answer+=(shell-1)*2*2;
            answer+=big-Y+1;
        }
        else{
            answer+=(shell-1)*2*3;
            answer+=big-X+1;
        }
        cout<<answer<<"\n";
    }
}
void func2(void){
    int N,Z;cin>>N>>Z;
    if(N*N==Z){cout<<N/2+1<<" "<<N/2+1<<"\n";return;}
    int shell;
    Z=N*N-Z+1;
    [&](){
        int s,e;
        s=1;e=N/2+1;//1은 절대 안 되니까
        while(s+1!=e){
            int mid=(s+e)/2;
            int tmp=(mid*2-1)*(mid*2-1);
            if(tmp>=Z)e=mid;
            else s=mid;
        }
        shell=e;
    }();
    // cout<<shell<<"A";
    // cout<<log2(100000000)<<" ";
    int big=(N/2+1)-shell+1;
    int small=(N/2+1)+shell-1;
    swap(big,small);
    int tmp=(shell-1)*2;
    int start=(tmp-1)*(tmp-1);
    if(Z<=start+tmp){
        Z-=start;
        cout<<small+Z<<" "<<small<<"\n";
    }
    else if(Z<=start+tmp*2){
        
        Z-=start+tmp;
        cout<<big<<" "<<small+Z<<"\n";
    }
    else if(Z<=start+tmp*3){
        Z-=start+tmp*2;
        cout<<big-Z<<" "<<big<<"\n";
    }
    else {
        Z-=start+tmp*3;
        cout<<small<<" "<<big-Z<<"\n";
    }
}
void solve(void){
    int op;cin>>op;
    if(op==1)func1();
    else func2();
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}