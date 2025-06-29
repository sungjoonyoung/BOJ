#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    long long answer=0;
    while(N--){
        string str;
        cin>>str;
        if(str=="Poblano")answer+=1500;
        else if(str=="Mirasol")answer+=6000;
        else if(str=="Serrano")answer+=15500;
        else if(str=="Cayenne")answer+=40000;
        else if(str=="Thai")answer+=75000;
        else if(str=="Habanero")answer+=125000;
    }
    cout<<answer;
}