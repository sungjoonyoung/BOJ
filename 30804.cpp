#include<iostream>
#include<queue>
using namespace std;
int arr[200'002];
queue<int> q;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)cin>>arr[i];
    if(N==1){
        cout<<1;
        return 0;
    }
    int s,e;
    s=e=1;
    int maxnum=0;
    while(s<=N){
        maxnum=max(maxnum,e-s);
        if(arr[e-1]==arr[e]){
            e++;
            continue;
        }
        if(e==N+1){
            maxnum=max(maxnum,e-s);
            break;
        }
        q.push(e);
        while(!(arr[s]==arr[e] or arr[e]==arr[q.front()])){
            s=q.front();
            q.pop();
        }
        e++;
    }
    cout<<maxnum;
}