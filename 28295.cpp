#include<iostream>
using namespace std;
char arr[5]="NESW";
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=0;
    for(int i=0;i<10;i++){
        int in;
        cin>>in;
        answer+=in;
    }
    cout<<arr[answer%4];
}