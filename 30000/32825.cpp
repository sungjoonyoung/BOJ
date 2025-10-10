#include<iostream>
using namespace std;
int arr[8];
int visited[15];
long long answer=0;
int D,H;
int coo(int i){
    if(i<=0 or i>13)return 1;
    else return 0;
}
void dfs(int d){
    if(d==4){
        int a,b,c,d,e;
        a=arr[0];
        b=arr[1];
        c=arr[3];
        d=arr[4];
        e=arr[5]-a-b;
        if(e!=arr[2]-c-d)return;
        if(a==b or a==c or a==d or a==e)return;
        if(b==c or b==d or b==e)return;
        if(c==d or c==e)return;
        if(d==e)return;
        if(coo(a))return;
        if(coo(b))return;
        if(coo(c))return;
        if(coo(d))return;
        if(coo(e))return;
        if(visited[a])return;
        if(visited[b])return;
        if(visited[c])return;
        if(visited[d])return;
        if(visited[e])return;
        // for(int i=1;i<=13;i++)if(!visited[i])cout<<i<<"A ";
        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
        answer++;
        return;
    }
    for(int i=1;i<=13;i++){
        if(visited[i])continue;
        visited[i]=1;
        if(d==0){
            arr[0]-=i;
            arr[3]-=i;
        }
        else if(d==1){
            arr[1]-=i;
            arr[3]-=i;
        }
        else if(d==2){
            arr[0]-=i;
            arr[4]-=i;
        }
        else{
            arr[1]-=i;
            arr[4]-=i;
        }
        //
        dfs(d+1);
        //
        visited[i]=0;
        if(d==0){
            arr[0]+=i;
            arr[3]+=i;
        }
        else if(d==1){
            arr[1]+=i;
            arr[3]+=i;
        }
        else if(d==2){
            arr[0]+=i;
            arr[4]+=i;
        }
        else{
            arr[1]+=i;
            arr[4]+=i;
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<3;i++)cin>>arr[i];
    cin>>D;
    for(int i=3;i<6;i++)cin>>arr[i];
    cin>>H;
    for(int i=1;i<=13;i++){
        int itmp=D-i;
        if(itmp<=0 or itmp>13)continue;
        if(i==itmp)continue;
        arr[3]-=i;
        arr[4]-=itmp;
        visited[i]=visited[itmp]=1;
        for(int j=1;j<=13;j++){
            int jtmp=H-j;
            if(jtmp<=0 or jtmp>13)continue;
            if(j==jtmp)continue;
            if(i==j)continue;
            if(i==itmp or i==j or i==jtmp)continue;
            if(itmp==j or itmp==jtmp)continue;
            if(j==jtmp)continue;
            visited[j]=visited[jtmp]=1;
            arr[0]-=j;
            arr[1]-=jtmp;
            
            dfs(0);

            visited[j]=visited[jtmp]=0;
            arr[0]+=j;
            arr[1]+=jtmp;
        }
        arr[3]+=i;
        arr[4]+=itmp;
        visited[i]=visited[itmp]=0;
    }
    cout<<answer;
}