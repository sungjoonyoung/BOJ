#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin,str);
    int answer=0;
    for(auto c:str){
        switch (c)
        {
        case 'A': case 'a': case 'b': case 'D': case 'd': case 'e': case 'g': case 'O': case 'o': case 'P': case 'p': case 'Q': case 'q': case 'R': case '@':
        answer++;
        break;
        case 'B':
        answer+=2;
        break;
        }
    }
    cout<<answer;
}