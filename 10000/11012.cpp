#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int N,C,evenN,M;
vector<int> row[500'001];
void solve(void){
    cin>>C>>M;
    N=100'005;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<C;i++){
        int x,y;
        cin>>x>>y;
        row[(1<<evenN)+x].push_back(y);
    }
    for(int i=0;i<100'005;i++){
        sort(row[(1<<evenN)+i].begin(),row[(1<<evenN)+i].end());
    }
    for(int h=(1<<evenN)/2;h>0;h/=2)for(int i=h;i<h*2;i++){
        int ind1,ind2;
        ind1=ind2=0;
        while(ind1<row[i*2].size() and ind2<row[i*2+1].size()){
            if(row[i*2][ind1]<=row[i*2+1][ind2])row[i].push_back(row[i*2][ind1++]);
            else row[i].push_back(row[i*2+1][ind2++]);
        }
        for(;ind1<row[i*2].size();ind1++)row[i].push_back(row[i*2][ind1]);
        for(;ind2<row[i*2+1].size();ind2++)row[i].push_back(row[i*2+1][ind2]);
    }
    //for(int i=0;i<row[2].size();i++)cout<<row[1][i]<<" ";
    long long answer=0;
    while(M--){
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        int ind1=(1<<evenN)+x1;
        int ind2=(1<<evenN)+x2;
        while(ind1<=ind2){
            if(ind1%2==1)answer+=upper_bound(row[ind1].begin(),row[ind1].end(),y2)-lower_bound(row[ind1].begin(),row[ind1].end(),y1);
            if(ind2%2==0)answer+=upper_bound(row[ind2].begin(),row[ind2].end(),y2)-lower_bound(row[ind2].begin(),row[ind2].end(),y1);
            ind1=(ind1+1)/2;
            ind2=(ind2-1)/2;
        }
    }
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        solve();
        for(int i=0;i<500'001;i++){
            row[i].clear();
        }
    }
}