#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> F;
vector<int> answer;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    getline(cin,a);
    getline(cin,b);
    F.resize(b.size(),0);
    
    int ind=0;
    for(int i=1;i<b.size();i++){
        while(ind>0 and b[i]!=b[ind])ind=F[ind-1];
        if(b[i]==b[ind]){
            ind++;
            F[i]=ind;
        }
    }
    //for(int i=0;i<F.size();i++)cout<<F[i]<<" ";
    ind=0;
    for(int i=0;i<a.size();i++){
        while(ind>0 and a[i]!=b[ind])ind=F[ind-1];
        if(a[i]==b[ind]){
            ind++;
            if(ind==b.size()){
                answer.push_back(i);
                ind=F[ind-1];
            }
        }
    }
    cout<<answer.size()<<"\n";
    for(int i=0;i<answer.size();i++)cout<<answer[i]-b.size()+2<<" ";
}