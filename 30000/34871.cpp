#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> lv,rv;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,Q;cin>>N>>Q;
    for(int i=0;i<N;i++){
        int l,r,y;cin>>l>>r>>y;
	lv.push_back(l);
	rv.push_back(r);
    }
    sort(lv.begin(),lv.end());
    sort(rv.begin(),rv.end());
    while(Q--){
	int in;cin>>in;
	int ltmp=lv.back()-in;
	int rtmp=in-rv.front();
	cout<<max(0,max(ltmp,rtmp))<<"\n";
    }
}
