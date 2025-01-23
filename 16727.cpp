#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A+D>B+C)cout<<"Persepolis ";
    else if(A+D<B+C)cout<<"Esteghlal ";
    else if(B>D)cout<<"Esteghlal ";
    else if(B<D)cout<<"Persepolis ";
    else cout<<"Penalty";
}