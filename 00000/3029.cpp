 #include<iostream>
 #include<string>
 using namespace std;

 int main(void){
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   string sstr, estr;
   cin>>sstr;
   cin>>estr;
   int sixtee=60*60, ten=10, start=0, end=0;
   for(auto a : sstr){
     if(a==':'){
       ten=10;
       sixtee/=60;
       continue;
     }
     start+=(int(a)-48)*sixtee*ten;
     ten/=10;
   }

   sixtee=60*60, ten=10;
   for(auto a : estr){
     if(a==':'){
       ten=10;
       sixtee/=60;
       continue;
     }
     end+=(int(a)-48)*sixtee*ten;
     ten/=10;
   }
   end+=60*60*24;
   end-=start;
   if(end >60*60*24)end-=60*60*24;
   sixtee=60*60;
   for(int i=0;i<3;i++){
     if(end/sixtee<10)cout<<'0'<<end/sixtee;
     else cout<<end/sixtee;
     end%=sixtee;
     sixtee/=60;
     if(i!=2)cout<<':';
   }
 }