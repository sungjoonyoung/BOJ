#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>> v;

struct cmp {
public:
	bool operator() (int a, int b){
		return a > b;
	}
};

priority_queue<int, vector<int>, cmp> pq;
bool compare(pair<int,int> a, pair<int,int> b) {
	if (a.first == b.first)return a.second < b.second;
	return a.first < b.first;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for(int i=0; i<N;i++){
		int S, T;
		cin >> S >> T;
		v.push_back({ S,T });
	}
	sort(v.begin(), v.end(), compare);
	pq.push(0);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].first >= pq.top()) {
			pq.pop();
			pq.push(v[i].second);
			//cout << pq.top();
		}
		else pq.push(v[i].second);
	}
	cout << pq.size();
}