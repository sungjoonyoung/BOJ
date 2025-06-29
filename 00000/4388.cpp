#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        string a,b;
        cin>>a>>b;
        if(a=="0" && b=="0")return 0;
        int count=0;
        while(a.size()!=b.size()){
            if(a.size()<b.size())a.insert(a.begin(),'0');
            else b.insert(b.begin(),'0');
        }
        for(int i=a.size()-1;i>=0;i--){
            int tmpa=a[i]-'0';
            int tmpb=b[i]-'0';
            
            if(tmpa+tmpb>=10){
                count++;
                if(i!=0)a[i-1]+=(tmpa+tmpb)/10;
            }
        }
        cout<<count<<"\n";
    }
}