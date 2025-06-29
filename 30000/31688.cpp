#include<iostream>
#include<vector>
using namespace std;
int arr[64][64];
vector<int> v;
void test(int n);
void get(int n);
void clear(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n;
	cin >> T;
	
	while (T--) {
		cin >> n;
		get(n);
		test(n);
		clear();
		cout << "\n";
	}
}
void get(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)cin >> arr[i][j];
	}
	return;
}
void test(int n) {
	int sum = 0, before=10000000000;
	for (int i = 0; i < n; i++) {
		if(i%2)for (int j = 0; j < n; j++) {
			v.push_back(arr[i][j]);
			if (arr[i][j] > before)sum++;
			before = arr[i][j];
		}
		else for(int j = n-1; j >= 0; j--) {
			v.push_back(arr[i][j]);
			if (arr[i][j] > before) sum++;
			before = arr[i][j];
		}
	}
	
	if (sum <= (n * n-1)/2) {
		for (int i = 0; i < v.size(); i++)cout << v[i]<<" ";
	}
	else {
		for (int i = v.size()-1; i > -1; i--)cout << v[i]<<" ";
	}
	return;
}
void clear(void) {
	for (int i = 0; i < 64; i++) {
		for (int j = 0; j < 64; j++)arr[i][j] = 0;
	}
	v.clear();
	return;
}