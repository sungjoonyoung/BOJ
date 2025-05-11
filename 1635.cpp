#include<iostream>
#include<string>
using namespace std;
int arr[100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    while(M--){
        int answer=0;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            answer+=arr[i];
        }
        string str;
        int i=0;
        for(;i<N;i++){
            if(answer==0)break;
            answer-=arr[i];
            answer+=arr[i]*(-1);
            str+="-1 ";
        }
        for(;i<N;i++)str+="1 ";
        str+='\n';
        cout<<str;
    }
}