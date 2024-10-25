#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
vector<int> v;
bool arr[10000001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 2; i <= 10000001; i++) {
		if (arr[i])continue;
		v.push_back(i);
		for (int j = 1; i * j < 10000001; j++) arr[i * j] = 1;
	}
	
	int N;
	cin >> N;
	for (int i = 0; i < v.size(); i++) {
		if (N > v[i]) continue;
		
		bool key = 1;
		string str = to_string(v[i]);
		for (int j = 0; j < str.size() / 2; j++) {
			if (str[j] != str[str.size() - 1 - j]) {
				key = 0;
				break;
			}
		}
		if (key){
			cout << v[i];
			break;
		}
	}
}