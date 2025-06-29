#include<iostream>
#include<string>
using namespace std;
int arr[3];
string name[3]={"Joffrey","Robb","Stannis"};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=-1;
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    arr[0]=a*d;
    arr[1]=b*e;
    arr[2]=c*f;
    for(int i=0;i<3;i++){
        answer=max(answer,arr[i]);
    }    
    for(int i=0;i<3;i++)if(arr[i]==answer)cout<<name[i]<<" ";
}