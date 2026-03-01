#include<iostream>
using namespace std;
char arr[26][2]; // 인접 리스트입니다.
void preorder(int x); // 전위순회
void inorder(int x); // 중위순회
void postorder(int x); // 후위순회
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for (int i = 0; i < 26; i++)for (int j = 0; j < 2; j++)arr[i][j] = '.';
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char in;
		cin >> in;
		cin >> arr[in - 'A'][0] >> arr[in - 'A'][1];
	}
	preorder(0);
	cout << "\n";
	inorder(0);
	cout << "\n";
	postorder(0);
}
void preorder(int x) { // 전위순회
	cout << char(x + 'A'); // 앞에 있음
	if (arr[x][0] != '.')preorder(arr[x][0] - 'A'); //왼쪽
	if (arr[x][1] != '.')preorder(arr[x][1] - 'A'); //오른쪽
}
void inorder(int x) { // 중위순회
	if (arr[x][0] != '.')inorder(arr[x][0] - 'A');
	cout << char(x + 'A'); // 중간에 있음
	if (arr[x][1] != '.')inorder(arr[x][1] - 'A');
}
void postorder(int x) { // 후위순회
	if (arr[x][0] != '.')postorder(arr[x][0] - 'A');
	if (arr[x][1] != '.')postorder(arr[x][1] - 'A');
	cout << char(x + 'A'); // 뒤에 있음

}