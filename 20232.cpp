#include<iostream>
#include<string>
using namespace std;
string arr[100]={"ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
                               "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
                               "ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU",
                               "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU",
                               "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int y;
    cin>>y;
    cout<<arr[y-1995];
}