#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
vector<pair<int,int>> in;
vector<pair<int, int>> out;
int arr[201][201];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		in.push_back({ x,y });
		out.push_back({ x,y });
	}

	sort(in.begin(), in.end());
	
	
	for (int i = 0; i < N; i++) {
		int count = 0;

		for (int j = i; j < N; j++) {
			
			if (in[i].first < in[j].first and in[i].second < in[j].second) count++;
		}
		
		arr[in[i].first][in[i].second] = count+1;
	}

	for (int i = 0; i < N; i++) {
		cout << arr[out[i].first][out[i].second] << " ";
	}
}
