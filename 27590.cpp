#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    //B-A+Bx=D-C+Dy
    for(int i=1;i<=5000;i++){
        if((i-(B-A))%B==0 and (i-(D-C))%D==0 ){
            cout<<i;
            break;
        }
    }
    
}