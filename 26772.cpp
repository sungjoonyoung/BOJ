#include<iostream>
#include<string>
using namespace std;
string arr[9]={" @@@   @@@  ",
               "@   @ @   @ ",
               "@    @    @ ",
               "@         @ ",
               " @       @  ",
               "  @     @   ",
               "   @   @    ",
               "    @ @     ",
               "     @      "
                };
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<9;i++){
        for(int j=0;j<N;j++)cout<<arr[i];
        cout<<"\n";
    }
}