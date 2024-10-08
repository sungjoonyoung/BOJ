#include<iostream>
#include<vector>
#include<utility>
using namespace std;
vector<pair<double, double>> v;
double mult(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		double x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	double answer = 0;
	for (int i = 0; i < N - 2; i++) answer += mult(i);
	cout << fixed;
	cout.precision(1);
	cout << abs(answer)<<"\n";
	//double tmp = 3.45;
	//cout.precision(1);
	//cout << tmp;
}
double mult(int x) {
	double out = 0;
	out += v[0].first * v[x + 1].second;
	out += v[x + 1].first * v[x + 2].second;
	out += v[x + 2].first * v[0].second;
	out -= v[0].second * v[x + 1].first;
	out -= v[x + 1].second * v[x + 2].first;
	out -= v[x + 2].second * v[0].first;
	return out / 2;
}