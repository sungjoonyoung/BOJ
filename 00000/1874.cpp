#include<iostream>
#include<vector>
using namespace std;
vector<int> stack;
vector<int> arr;
vector<char> out;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	int tmp;
	int now = 1;
	stack.push_back(0);
	int key = 1;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		while (key) {
			if (now < tmp and now>stack.back()) {
				stack.push_back(now);
				out.push_back('+');
				//cout << "+" << "\n";
				now++;
			}
			else if (now == tmp) {
				out.push_back('+');
				out.push_back('-');
				//cout << "+" << "\n";
				//cout << "-" << "\n";
				arr.push_back(tmp);
				now++;
				break;
			}
			else if (tmp == stack.back()) {
				out.push_back('-');
				//cout << "-" << "\n";
				arr.push_back(tmp);
				stack.pop_back();
				break;
			}
			else {
				key = 0;
				break;
			}
		}
		if (key == 0)break;
	}
/*
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
*/
	if (key == 0)cout << "NO";
	else {
		for (int i = 0; i < out.size(); i++) {
			cout << out[i] << "\n";
		}
	}
}