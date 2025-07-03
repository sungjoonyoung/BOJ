#include<iostream>
using namespace std;
int arr[1'000'010];
int N,B,C;
long long answer=0;
int a,b,c;
void func0(void){
    for(int i=0;i<N;i++){
        if(arr[i+1]>arr[i+2]){
            long long tmp;
            tmp=min(arr[i],arr[i+1]-arr[i+2]);
            answer+=tmp*b;
            for(int j=i;j<i+2;j++)arr[j]-=tmp;

            tmp=min(arr[i],min(arr[i+1],arr[i+2]));
            answer+=tmp*c;
            for(int j=i;j<i+3;j++)arr[j]-=tmp;

            tmp=arr[i];
            answer+=tmp*a;
            for(int j=i;j<i+1;j++)arr[j]-=tmp;
        }
        else{
            long long tmp;
            tmp=min(arr[i],min(arr[i+1],arr[i+2]));
            answer+=tmp*c;
            for(int j=i;j<i+3;j++)arr[j]-=tmp;

            tmp=min(arr[i],arr[i+1]);
            answer+=tmp*b;
            for(int j=i;j<i+2;j++)arr[j]-=tmp;

            tmp=arr[i];
            answer+=tmp*a;
            for(int j=i;j<i+1;j++)arr[j]-=tmp;
        }
        // for(int k=0;k<N;k++)cout<<arr[k]<<" ";
        // cout<<"\n";
        // cout<<answer<<"\n";
    }
    cout<<answer;
}
void func1(void){
    for(int i=0;i<N;i++){
        long long tmp;
        tmp=arr[i];
        answer+=tmp*a;
        for(int j=i;j<i+1;j++)arr[j]-=tmp;
    }
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>B>>C;
    for(int i=0;i<N;i++)cin>>arr[i];
    a=B;
    b=B+C;
    c=B+C*2;
    if(C<B)func0();
    else func1();
}