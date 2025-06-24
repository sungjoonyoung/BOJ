#include<iostream>
using namespace std;
int arr[6]={500,100,50,10,5,1};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    N=1000-N;
    int answer=0;
    for(int i=0;i<6;i++){
        while(N-arr[i]>=0){
            N-=arr[i];
            answer++;
        }
    }
    cout<<answer;
}