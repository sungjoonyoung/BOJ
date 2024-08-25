#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
struct wh {
	int index, rl, num;
};
vector<struct wh> ant;
queue<int> q;
bool compare(wh x, wh y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, L, max=-1, lr=0;
	int in, point;
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		cin >> in;
		if (in < 0)ant.push_back({ abs(in),-1,i });
		else if (in > 0)ant.push_back({ abs(in),1,i });
	}

	sort(ant.begin(), ant.end(), compare);

	for (int i = 0; i < N; i++) {
		if (ant[i].rl > 0 and L - ant[i].index > max) {
			max = L - ant[i].index;
			point = i;
			lr = 1;
		}
		else if (ant[i].rl <0 and ant[i].index>max) {
			max = ant[i].index;
			point = i;
			lr = -1;
		}
	}
	if (lr < 0) {
		for (int i = 0; i <= point; i++) {
			if (i == point) {
				if (q.empty()) cout << ant[i].num+1<<" "<<max;
				else cout << q.front()+1<<" "<<max;
			}
			else if (ant[i].rl > 0)q.push(ant[i].num);
			else if (q.empty())continue;
			else {
				q.pop();
				q.push(ant[i].num);
			}
		}
	}
	else if (lr >0) {
		for (int i = ant.size() - 1; i >= point; i--) {
			if (i == point) {
				if (q.empty()) cout << ant[i].num + 1 << " " << max;
				else cout << q.front() + 1 << " " << max;
			}
			else if (ant[i].rl < 0)q.push(ant[i].num);
			else if (q.empty())continue;
			else {
				q.pop();
				q.push(ant[i].num);
			}
		}
	}

}
bool compare(wh x, wh y) {
	return x.index<y.index;
}