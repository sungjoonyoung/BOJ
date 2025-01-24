#include<iostream>
#include<string>
using namespace std;
int arr[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        int answer=0;
        for(auto c:str)arr[c-'0']++;
        for(int i=0;i<10;i++){
            if(arr[i])answer++;
        }
        cout<<answer<<"\n";
        fill(arr,arr+10,0);
    }
}