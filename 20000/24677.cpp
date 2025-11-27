#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int A[5000];
int B[5000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)cin>>B[i];
    int answer=0;
    int a=0;
    int b=0;
    int ind=0;
    for(int i=0;i<N;i++){
        ind=a=b=i;
        int amin,bmin;
        amin=A[i];
        bmin=B[i];
        for(int j=i+1;j<N;j++){
            if(A[j]<amin and B[j]<bmin){
                ind=a=b=j;
                amin=min(A[j],amin);
                bmin=min(B[j],bmin);
            }
            else{  
                amin=min(A[j],amin);
                bmin=min(B[j],bmin);
                if(A[j]<A[ind] and a==ind)a=j;
                if(B[j]<B[ind] and b==ind)b=j;
            }
        }
        answer++;
        if(ind==a and ind==b)break;
        if(ind==a or ind==b)i=max(a,b)-1;
        else i=min(a,b)-1;
    }
    cout<<answer;
}