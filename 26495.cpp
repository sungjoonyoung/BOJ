#include<iostream>
#include<string>
using namespace std;
char arr[5][51]={
    "0000    1 2222 3333 4  4 5555 6666 7777 8888 9999",
    "0  0    1    2    3 4  4 5aaa 6aaa    7 8  8 9  9",
    "0  0    1 2222 3333 4444 5555 6666    7 8888 9999",
    "0  0    1 2aaa    3    4    5 6  6    7 8  8    9",
    "0000    1 2222 3333    4 5555 6666    7 8888    9"
};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        int tmp=str[i]-'0';
        for(int j=0;j<5;j++)
        {
            for(int k=5*tmp;k<5*tmp+4;k++){
                if(arr[j][k]=='a')continue;
                cout<<arr[j][k];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}