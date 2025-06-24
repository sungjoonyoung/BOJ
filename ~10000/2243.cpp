#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> v;
int N=1'000'001;
int evenN=pow(2,(int)(log2(N-1)+1));
void grade(void){
    int x;
    cin>>x;
    int ind=1;
    while(1){
        if(ind>=evenN){
            cout<<ind-evenN+1<<"\n";
            while(ind){
                v[ind]--;
                ind/=2;
            }
            break;
        }
        if(x<=v[ind*2]){
            ind*=2;
        }
        else{
            x-=v[ind*2];
            ind=ind*2+1;
        }
    }
}
void add(void){
    int x, man;
    cin>>x>>man;
    x--;
    x+=evenN;
    while(x){
        v[x]+=man;
        x/=2;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //cout<<evenN;
    v.resize(evenN*2+1);
    int T;
    cin>>T;
    while(T--){
        int op;
        cin>>op;
        if(op==1)grade();
        else add();
    }
}