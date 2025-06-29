#include<iostream>
#include<string>
using namespace std;
int arr['z'-'a'+1];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        int answer=0;
        for(auto c:str)arr[c-'A']++;
        for(int i=0;i<'z'-'a'+1;i++){
            if(!arr[i])answer+=i+65;
        }
        cout<<answer<<"\n";
        fill(arr,arr+'z'-'a'+1,0);
    }
}