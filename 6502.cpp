 #include<iostream>
 using namespace std;

 int main(void){
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int r,w,l, count=1;
   while(1){
     cin>>r;
     if(r==0)break;
     cin>>w>>l;

     if(r*r*4<w*w+l*l)cout<<"Pizza "<<count<<" does not fit on the table.\n";
     else cout<<"Pizza "<<count<<" fits on the table.\n";
     count++;

   }

 }