#include<iostream>
#include<vector>
using namespace std;
long double arr[2][2000000];
vector<long double> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	//cin >> arr[0][0] >> arr[1][0];
	for (int i = 0; i < N ; i++)cin >> arr[0][i] >> arr[1][i];
	//for (int i = 0; i < N; i++)cout << arr[0][i] << arr[1][i];
	int ind1 = 1;
	int ind2 = 2;
	while (ind1 != N-1) {
		long double tmp = arr[0][0] * arr[1][ind1] + arr[0][ind1] * arr[1][ind2] + arr[0][ind2] * arr[1][0];
		tmp -= arr[1][0] * arr[0][ind1] + arr[1][ind1] * arr[0][ind2] + arr[1][ind2] * arr[0][0];
		v.push_back(abs(tmp));
		//cout << abs(tmp) << " ";
		ind1++;
		ind2++;
	}
	ind1 = 0;
	ind2 = v.size() - 1;
	long double a = v[ind1];
	long double b = v[ind2];
	if(v.size()!=1)while (ind1 +1!= ind2) {
		if (a < b) {
			ind1++;
			a += v[ind1];
		}
		else {
			ind2--;
			b += v[ind2];
		}
	}
	cout << fixed;
	cout.precision(10);
	if (v.size() == 1) {
		cout << (long double)(1 * arr[0][ind1 + 2] + 1 * arr[0][ind1 + 1]) / (1 + 1) << " " << (long double)(1 * arr[1][ind1 + 2] + 1 * arr[1][ind1 + 1]) / (1 + 1);
	}
	else if (a < b) {
		long double left = (b - a);
		long double right = v[ind2]*2 - (b - a);
		cout << (long double)(left * arr[0][ind1 + 3] + right * arr[0][ind1 + 2]) / (left + right) << " " << (long double)(left * arr[1][ind1 + 3] + right * arr[1][ind1 + 2]) / (left + right);
	}
	else if(a>b) {
		long double left = (a-b);
		long double right = v[ind1]*2  - (a-b);
		cout << (long double)(right * arr[0][ind1 + 2] + left * arr[0][ind1 + 1]) / (left + right) << " " << (long double)(right * arr[1][ind1 + 2] + left * arr[1][ind1 + 1]) / (left + right);
	}
	else {
		cout << arr[0][ind1 + 2] << " " << arr[1][ind1 + 2];
	}
}