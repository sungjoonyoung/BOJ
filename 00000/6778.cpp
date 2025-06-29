#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ante,eye;
    cin>>ante>>eye;
    if(ante>=3&&eye<=4)cout<<"TroyMartian\n";
    if(ante<=6&&eye>=2)cout<<"VladSaturnian\n";
    if(ante<=2&&eye<=3)cout<<"GraemeMercurian\n";
}