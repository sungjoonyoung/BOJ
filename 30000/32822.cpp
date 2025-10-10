#include<iostream>
#include<queue>
using namespace std;
priority_queue<int> arr[1001];
int A[1001][1001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;cin>>N>>M;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>A[i][j];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        int in;cin>>in;
        arr[j].push(abs(A[i][j]-in));
    }
    long long answer=0;
    while(M--){
        int in;cin>>in;
        in--;
        answer+=arr[in].top();
        // arr[in].pop();
    }
    cout<<answer;
}