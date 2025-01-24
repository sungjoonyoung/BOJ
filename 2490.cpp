#include<iostream>
using namespace std;
char arr[6]="EABCD";
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            int in;
            cin>>in;
            count+=in;
        }
        cout<<arr[4-count]<<"\n";
    }
}