#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tmp=9 * 1 + 7 * 3 + 8 * 1 + 0 * 3 + 9 * 1 + 2 * 3 + 1 * 1 + 4 * 3 + 1 * 1 + 8 * 3;
    int a,b,c;
    cin>>a>>b>>c;
    tmp+=a+b*3+c;
    cout<<"The 1-3-sum is "<<tmp;
}