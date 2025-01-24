#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cou,bill;
    cin>>cou>>bill;
    int maxnum=bill;
    if(cou>=5)maxnum=min(maxnum,bill-500);
    if(cou>=10)maxnum=min(maxnum,bill*90/100);
    if(cou>=15)maxnum=min(maxnum,bill-2000);
    if(cou>=20)maxnum=min(maxnum,bill*75/100);
    cout<<max(maxnum,0);
}