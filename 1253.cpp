#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	int idx1, idx2,sum;
	long long count = 0;
	sort(v.begin(),v.end());
	if (N < 3)cout << 0;
	else {
		for (int i = 0; i < N; i++) {
			tmp = v[i];
			v.erase(v.begin() + i);
			idx1 = 0;
			idx2 = v.size() - 1;
			sum = v[idx1] + v[idx2];
			while (1) {
				if (tmp == sum) {
					count++;
					break;
				}
				if (idx1 == idx2-1) {
					break;
				}
				else if (tmp > sum) {
					sum -= v[idx1];
					idx1++;
					sum += v[idx1];
				}
				else if (tmp < sum) {
					sum -= v[idx2];
					idx2--;
					sum += v[idx2];
				}
			}
			v.insert(v.begin() + i, tmp);
		}
		cout << count;
	}
}