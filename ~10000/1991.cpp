#include<iostream>
using namespace std;
char arr[26][2];
void front(int x);
void middle(int x);
void back(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for (int i = 0; i < 26;i++)for (int j = 0; j < 2; j++)arr[i][j] = '.';
	//cout << int('A');//65
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char in;
		cin >> in;
		cin >> arr[int(in) - 65][0] >> arr[int(in) - 65][1];
	}
	front(0);
	cout << "\n";
	middle(0);
	cout << "\n";
	back(0);

}
void front(int x) {
	cout << char(x + 65);
	if (arr[x][0] != '.')front(int(arr[x][0]) - 65);
	if (arr[x][1] != '.')front(int(arr[x][1]) - 65);
}
void middle(int x) {
	if (arr[x][0] != '.')middle(int(arr[x][0]) - 65);
	cout << char(x + 65);
	if (arr[x][1] != '.')middle(int(arr[x][1]) - 65);
}
void back(int x) {
	if (arr[x][0] != '.')back(int(arr[x][0]) - 65);
	if (arr[x][1] != '.')back(int(arr[x][1]) - 65);
	cout << char(x + 65);

}