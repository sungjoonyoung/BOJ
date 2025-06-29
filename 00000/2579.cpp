 //뒤에 두 개에서 큰 거
 #include<iostream>
 #include<vector>
 using namespace std;
 vector<int> v;
 vector<int> fo;
 vector<int> fx;
 int main(void){
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int N;
   cin>>N;
   v.push_back(0);
   fo.push_back(0);
   fx.push_back(0);

   for(int i=0;i<N;i++){
     int tmp;
     cin>>tmp;
     v.push_back(tmp);
     fo.push_back(0);
     fx.push_back(0);
   }
   fx[1]=v[1];
   fo[2]=v[2]+v[1];
   fx[2]=v[2];
   for(int i=3;i<=N;i++){
     fx[i]=max(fx[i-2],fo[i-2])+v[i];
     fo[i]=fx[i-1]+v[i];
   }
   cout<<max(fo[N],fx[N]);
 }