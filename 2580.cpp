#include<iostream>
#include<vector>
#include<utility>
using namespace std;
bool arrx[10][10];
bool arry[10][10];
bool arrs[10][10];
int map[10][10];
vector<pair<int, int>> v;
bool func(int n);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			
			int in;
			cin >> in;
			map[i][j] = in;
			if (in != 0) {
				arrx[i][in] = 1;
				arry[j][in] = 1;
				int tmp = 3 * ((i - 1) / 3) + ((j - 1) / 3) + 1;
				arrs[tmp][in] = 1;
			}
			else v.push_back({ i,j });
		}
	}
	//for (int i = 1; i <= 9; i++)cout << arrs[2][i] << " "
	func(0);
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}


}
bool func(int n) {
	
	if (n == v.size()) {
		
		return 1;
	}
	int x = v[n].first;
	int y = v[n].second;

	for (int i = 1; i <= 9; i++) {
		int tmp = 3 * ((x - 1) / 3) + ((y - 1) / 3) + 1;
		if (arrx[x][i])continue;
		if (arry[y][i])continue;
		if (arrs[tmp][i])continue;

		map[x][y] = i;
		arrx[x][i] = 1;
		arry[y][i] = 1;
		arrs[tmp][i] = 1;



		if(func(n + 1))return 1;

		map[x][y] = 0;
		arrx[x][i] = 0;
		arry[y][i] = 0;
		arrs[tmp][i] = 0;
	}
	return 0;
}