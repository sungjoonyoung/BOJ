#include<iostream>
#include<string>
using namespace std;
int arr[5];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for(auto c:str){
        if(c=='M')arr[0]++;
        if(c=='O')arr[1]++;
        if(c=='B')arr[2]++;
        if(c=='I')arr[3]++;
        if(c=='S')arr[4]++;
    }
    if(arr[0]&&arr[1]&&arr[2]&&arr[3]&&arr[4])cout<<"YES";
    else cout<<"NO";
}