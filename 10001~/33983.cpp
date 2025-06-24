#include<iostream>
#include<string>
using namespace std;
int dp[500'002];
int visited[500'002];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    string str;
    cin>>str;
    int combo=0;
    int count=0;
    int ind=0;
    if(str.size()%3!=0){
        cout<<"mix";
        return 0;
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='H'){
            combo++;
            count++;
        }
        else{
            dp[ind]=combo;
            visited[combo]++;
            ind++;
        }
    }
    if(ind*2!=count){
        cout<<"mix";
        return 0;
    }
    if(str.front()=='O' or str.back()=='O'){
        cout<<"mix";
        return 0;
    }
    //for(int j=0;j<ind;j++)cout<<ind<<" ";
    for(int j=0;j<ind;j++){
        if(count-dp[j]<=ind-j-1){
            cout<<"mix";
            return 0;
        }
        if(dp[j]<=j){
            cout<<"mix";
            return 0;
        }
    }
    
    cout<<"pure";
}