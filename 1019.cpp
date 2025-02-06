#include <cmath>
#include <iostream>
#include <string>
using namespace std;
long long arr[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        int tmp = str[i] - '0';
        for (int j = 0; j < tmp; j++) {
            for(int k=0;k<10;k++)arr[k] += pow(10, str.size() - i - 1)/10* (str.size() - i - 1);
            arr[j]+=pow(10, str.size() -i-1);
        }
        long long find = 1;
        for (int j = i+1; j < str.size(); j++) find += (str[j] - '0')*pow(10,str.size()-j-1);
        arr[tmp] += find;
    }
    for(int i=0;i<str.size();i++)arr[0]-=pow(10,i);
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
}