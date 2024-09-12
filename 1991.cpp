#include<iostream>
#include<vector>
using namespace std;
char arr[26][2];
vector<char> v;
void front(int x);
void middle(int x);
void back(int x);
void outf(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		//cout << int('A');//65
		char root;
		cin >> root;
		cin >> arr[root - 65][0] >> arr[root - 65][1];
	}
	front(0);
	outf();
	v.clear();
	middle(0);
	outf();
	v.clear();
	back(0);
	outf();
	v.clear();
}
void front(int x) {
	v.push_back(x + 65);
	if (arr[x][0] == '.' and arr[x][1] == '.')return;
	if (arr[x][0] != '.')front(arr[x][0]);
	if (arr[x][1] != '.')front(arr[x][1]);
}
void middle(int x) {

}
void back(int x) {

}
void outf(void) {
	for (int i = 0; i < v.size(); i++)cout << v[i];
	cout << "\n";
}