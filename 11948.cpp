#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum=0;
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    sum=A+B+C+D-min({A,B,C,D});

    cin>>A>>B;
    cout<<sum+max(A,B);
}