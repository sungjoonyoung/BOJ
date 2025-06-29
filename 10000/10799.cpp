#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int arr[100000];
int arr1[100000][2];
int razer[100001];
vector<char> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	getline(cin, str);
	int idx = -1;
	int ind = 0;
	int ind1 = 0;
	for (auto c : str) {
		idx++;
		if (c == '(') {
			v.push_back('(');
			arr[ind] = idx;
			ind++;
		}
		else if (c == ')') {
			v.pop_back();
			arr1[ind1][0] = arr[ind - 1];
			arr1[ind1][1] = idx;
			ind--;
			ind1++;
		}
	}
	int many = 0;
	for (int i = 0; i < (idx + 1) / 2 ; i++){
		if (arr1[i][1] - arr1[i][0] == 1) {
			razer[many] = arr1[i][0];
			many++;
		}
	}
	int count, sum = 0;
	for (int i = 0; i < (idx + 1) / 2; i++) {
		count = 0;
		for (int j = 0; j < many; j++) {
			if (arr1[i][0] < razer[j] and razer[j] < arr1[i][1])count++;
		}
		if (arr1[i][1] - arr1[i][0] != 1) sum += count + 1;
	}
	cout << sum;
}