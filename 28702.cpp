#include<iostream>
#include<string>
using namespace std;
string in[3];
int arr[3];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a, b, c;
	int key = 0;
	int idx, tmp;
	for (int i = 0; i < 3; i++) {
		cin >> in[i];
		if (in[i] == "Fizz")arr[0] = -1;
		else if (in[i] == "Buzz")arr[0] = -2;
		else if (in[i] == "FizzBuzz")arr[0] = -3;
		else {
			idx = i;
			tmp = stoi(in[i]);
			key = 1;
		}
	}
	if (key == 1) {
		tmp = tmp + 3 - idx;
		if (tmp % 15 == 0)cout << "FizzBuzz";
		else if (tmp % 3 == 0)cout << "Fizz";
		else if (tmp % 5 == 0)cout << "Buzz";
		else cout << tmp;

	}
	else {
		int k = 0;
		while (1) {
			int l = 0;
			k++;
			for (int i = 0; i < 3; i++) {
				if (arr[i] == -1 and k % 3 == 0 and k % 5 != 0)break;
				else if (arr[i] == -2 and (k+1) % 3 != 0 and (k+1) % 5 == 0)break;
				else if (arr[i] == -3 and (k+2) % 3 == 0 and (k+2) % 5 == 0)break;
				else l = 1;
			}
			if (l == 0) {
				k += 3;
				if (k % 15 == 0)cout << "FizzBuzz";
				else if (k % 3 == 0)cout << "Fizz";
				else if (k % 5 == 0)cout << "Buzz";
				else cout << k;
				break;
			}
		}
	}
	

}