#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
vector<int> indarr;
vector<int> tmp;

    int tmps,tmpe;
    int key=1;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    v.resize(N+5);
    for(int i=1;i<=N;i++)cin>>v[i];
    int lower,upper;
    lower=1;
    upper=N;
    int k=1;
    for(int i=1;i<N;i++){
        if(v[i]+1!=v[i+1])k=0;
    }
    if(k){
        cout<<"1 1\n1 1";
        return 0;
    }

    while(lower<=N and v[lower]==lower)lower++;
    while( upper>0 and v[upper]==upper )upper--;


    int s,e;
    for(int i=lower;i<=upper;i++){
        if(v[i]==upper)e=i;
        if(v[i]==lower)s=i;
    }



    //left first
    tmp=v;
    for(int i=0;i<=(s-lower)/2;i++)swap(tmp[lower+i],tmp[s-i]);
    key=1;
    for(int i=1;i<N;i++){
        if(tmp[i]+1!=tmp[i+1])key=0;
    }
    if(key){
        cout<<lower<<" "<<s<<"\n"<<"1 1";
        return 0;
    }

    for(int i=lower;i<=upper;i++){
        if(tmp[i]==upper)tmpe=i;
        if(tmp[i]==lower)tmps=i;
    }
    for(int i=0;i<=(upper-tmpe)/2;i++)swap(tmp[tmpe+i],tmp[upper-i]);
    key=1;
    for(int i=1;i<N;i++){
        if(tmp[i]+1!=tmp[i+1])key=0;
    }
    if(key){
        cout<<lower<<" "<<s<<"\n"<<tmpe<<" "<<upper;
        return 0;
    }




    //right first
    tmp=v;
    for(int i=0;i<=(upper-e)/2;i++)swap(tmp[e+i],tmp[upper-i]);
    key=1;
    for(int i=1;i<N;i++){
        if(tmp[i]+1!=tmp[i+1])key=0;
    }
    if(key){
        cout<<e<<" "<<upper<<"\n1 1";
        return 0;
    }

    for(int i=lower;i<=upper;i++){
        if(tmp[i]==upper)tmpe=i;
        if(tmp[i]==lower)tmps=i;
    }
    for(int i=0;i<=(tmps-lower)/2;i++)swap(tmp[lower+i],tmp[tmps-i]);
    key=1;
    for(int i=1;i<N;i++){
        if(tmp[i]+1!=tmp[i+1])key=0;
    }
    if(key){
        cout<<e<<" "<<upper<<"\n"<<lower<<" "<<tmps;
        return 0;
    }





    //middle
    if(e==lower and s==upper){
        for(int i=lower;i<upper;i++){
            if(abs(v[i]-v[i+1])!=1)indarr.push_back(i);
        }
        if(indarr.size()==2) cout<<indarr[0]+1<<" "<<indarr[1]<<"\n";
        else cout<<"1 1";
        cout<<lower<<" "<<upper;
    }

}