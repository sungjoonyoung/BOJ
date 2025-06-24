#include<iostream>
using namespace std;
typedef long long ll;
ll x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4;
int met(ll xc1, ll yc1, ll xc2, ll yc2, ll x, ll y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> x_1 >> y_1 >> x_2>> y_2 >> x_3 >> y_3 >> x_4 >> y_4;
	int a = met(x_1, y_1, x_2, y_2, x_3, y_3);
	int b = met(x_1, y_1, x_2, y_2, x_4, y_4);
	int c = met(x_3, y_3, x_4, y_4, x_1, y_1);
	int d = met(x_3, y_3, x_4, y_4, x_2, y_2);
	//cout << a << " " << b << " " << c << " " << d << "\n";
	if (a == 0 and b == 0) {
		if (min(x_1, x_2) < min(x_3, x_4)) {
			cout << (max(x_1, x_2) >= min(x_3, x_4));
		}
		else if (min(x_1, x_2) > min(x_3, x_4)) {
			cout << (min(x_1, x_2) <= max(x_3, x_4));
		}
		else {
			if (max(x_1, x_2) != min(x_1, x_2))cout << "1";
			else if (min(y_1, y_2) < min(y_3, y_4)) {
				cout << (max(y_1, y_2) >= min(y_3, y_4));
			}
			else if (min(y_1, y_2) > min(y_3, y_4)) {
				cout << (min(y_1, y_2) <= max(y_3, y_4));
			}
			else cout << "1";
		}
	}
	else {
		cout << ((a != b) and (c != d));
	}
}
int met(ll xc1, ll yc1, ll xc2, ll yc2, ll x, ll y) {
	ll tmpx1 = xc2 - xc1;
	ll tmpy1 = yc2 - yc1;
	ll tmpx2 = x - xc1;
	ll tmpy2 = y - yc1;
	ll result = (tmpx1 * tmpy2) - (tmpx2 * tmpy1);
	if (result > 0)return 1;
	else if (result < 0)return -1;
	else return 0;
}