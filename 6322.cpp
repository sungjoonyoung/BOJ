#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed;
    cout.precision(3);
    for(int i=1;;i++){
        long double a,b,c;
        cin>>a>>b>>c;
        if(!(a||b||c))break;
        cout<<"Triangle #"<<i<<"\n";
        if(a==-1){
            if(b>=c)cout<<"Impossible.";
            else cout<<"a = "<<sqrt(pow(c,2)-pow(b,2));
        }
        else if(b==-1){
            if(a>=c)cout<<"Impossible.";
            else cout<<"b = "<<sqrt(pow(c,2)-pow(a,2));
        }
        else{
            cout<<"c = "<<sqrt(pow(a,2)+pow(b,2));
        }
        cout<<"\n\n";
    }
}