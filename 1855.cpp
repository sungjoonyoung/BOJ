#include<iostream>
#include<string>
using namespace std;
char arr[20][20];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    string str;
    cin>>str;
    int count=0;
    for (int i=0;i<str.size()/N;i++){
        if(i%2==0){
            for(int j=0;j<N;j++){
                arr[i][j]=str[count];
                count++;
            }
        }
        if(i%2==1){
            for(int j=N-1;j>=0;j--){
                arr[i][j]=str[count];
                count++;
            }
        }
    }
    for(int i=0;i<N;i++)for(int j=0;j<str.size()/N;j++)cout<<arr[j][i];
}