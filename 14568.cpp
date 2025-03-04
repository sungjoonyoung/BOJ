#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=0;
    for(int i=1;i<N;i++){
        for(int j=1;j<N;j++){
            for(int k=1;k<N;k++){
                if(i+j+k==N and i>=j+2 and k%2==0)answer++;
            }
        }
    }
    cout<<answer;
}