#include <iostream>
#include <string>
using namespace std;
char arr[21];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, tmp;
	string str;
	cin >> N;
	while (N--) {
		cin >> str;
		if (str == "add") {
			cin >> tmp;
			if (arr[tmp] > 0)continue;
			else arr[tmp]=1;
		}
		else if (str == "remove") {
			cin >> tmp;
			arr[tmp] = 0;
		}
		else if (str == "check") {
			cin >> tmp;
			cout << int(arr[tmp])<<"\n";
		}
		else if (str == "toggle") {
			cin >> tmp;
			if (arr[tmp] == 1)arr[tmp] = 0;
			else arr[tmp] = 1;
		}
		else if (str == "all") {
			for (int i = 0; i < 20; i++) arr[i + 1] = 1;
		}
		else if (str == "empty") {
			for (int i = 0; i < 20; i++) arr[i + 1] = 0;
		}
	}
}