#include<iostream>
using namespace std;
int main(void){
    long long A,B,C;
    cin>>A>>B>>C;
    cout<<(long long)max(A*B/C,(long long)A*(long long)C/(long long)B);
}