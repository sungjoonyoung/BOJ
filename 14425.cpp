//#include<iostream>
//#include<string>
//#include<unordered_set>
//using namespace std;
//unordered_set<string> s;
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int N, M;
//	cin >> N >> M;
//	while (N--) {
//		string in;
//		cin >> in;
//		s.insert(in);
//	}
//	int count = 0;
//	while (M--) {
//		string in;
//		cin >> in;
//		if (s.find(in) != s.end())count++;
//	}
//	cout << count;
//}
//굳이구태여 트라이 공부
#include<iostream>
#include<string>
using namespace std;
int ctoi(char c) {
	return(c - 'a');
}
struct struc
{
	int ind = 0;
	int arr[5000001][27];

	void insert(string s) {
		int tmpind = 0;
		for (int i = 0; i < s.size(); i++) {
			if (arr[tmpind][ctoi(s[i])]) {
				tmpind = arr[tmpind][ctoi(s[i])];
			}
			else {
				ind++;
				arr[tmpind][ctoi(s[i])] = ind;
				tmpind = ind;
			}
		}
		arr[tmpind][26] = 1;
	}

	bool find(string s) {
		int tmpind = 0;
		for (int i = 0; i < s.size(); i++) {
			if (arr[tmpind][ctoi(s[i])]) {
				tmpind = arr[tmpind][ctoi(s[i])];
			}
			else {
				return 0;
			}
		}
		if (arr[tmpind][26])return 1;
		else return 0;
	}
}tri;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	while (N--) {
		string in;
		cin >> in;
		tri.insert(in);
	}
	int count = 0;
	while (M--) {
		string in;
		cin >> in;
		if (tri.find(in)) {
			//cout <<"  " << in << "\n";
			count++;
		}
	}
	cout << count;
}