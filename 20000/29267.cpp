#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int save = 0;
    int ammo;
    int N;
    cin>>N>>ammo;
    int cur=0;
    while(N--){
        string str;
        cin>>str;
        if(str=="save"){
            save=cur;
        }
        else if(str=="load"){
            cur=save;
        }
        else if(str=="shoot"){
            cur--;
        }
        else if(str=="ammo"){
            cur+=ammo;
        }
        cout<<cur<<"\n";
    }
}