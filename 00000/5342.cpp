#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double sum=0;
    while(1){
        string str;
        cin>>str;
        if(cin.eof())break;
        if(str=="Paper")sum+=57.99;
        else if(str=="Printer")sum+=120.50;
        else if(str=="Planners")sum+=31.25;
        else if(str=="Binders")sum+=22.50;
        else if(str=="Calendar")sum+=10.95;
        else if(str=="Notebooks")sum+=11.20;
        else if(str=="Ink")sum+=66.95;
    }
    cout<<"$"<<sum;
}