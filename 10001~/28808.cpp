#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    int answer=0;
    for(int i=0;i<N;i++){
        int key=0;
        for(int j=0;j<M;j++){
            char c;
            cin>>c;
            if(c=='+' and !key){
                answer++;
                key=1;
            }
        }
    }
    cout<<answer;
}