#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s,e;
    cin>>s>>e;
    int count=0;
    long long answer=0;
    for(int i=1;i<1000;i++){
        int tmp=i;
        while(tmp--){
            count++;
            if(s<=count && count<=e){
                answer+=i;
            }
            if(e<count){
                cout<<answer;
                return 0;
            }
        }
    }
}