//from 동동메니저 https://ddmanager.pe.kr/151
#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    int N=0;
    N+=((str[0]&255)-234)*4096;
    N+=((str[1]&255)-176)*64;
    N+=(str[2]&255)-127;
    cout<<N;
}