//from 동동메니저 https://ddmanager.pe.kr/150
#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int in;
    cin>>in;
    in+=3071;
    str.push_back(in/4096+234);
    str.push_back(in/64%64+128);
    str.push_back(in%64+128);
    cout<<str;
}