#include<iostream>
#include<string>
using namespace std;
int arr[4];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int S, P, A, C, G, T, count;
	cin >> S >> P;
	string str;
	cin >> str;
	cin >> A >> C >> G >> T;
	count = 0;
	for (int i = 0; i < P; i++) {
		if (str[i] == 'A')arr[0]++;
		else if (str[i] == 'C')arr[1]++;
		else if (str[i] == 'G')arr[2]++;
		else if (str[i] == 'T')arr[3]++;
	}
	if (arr[0] > A - 1 and arr[1] > C - 1 and arr[2] > G - 1 and arr[3] > T - 1) {
		count++;
	}
	int i, j;
	i = 0;
	j = P - 1;
	while (j < S-1) {
		if (str[i] == 'A')arr[0]--;
		else if (str[i] == 'C')arr[1]--;
		else if (str[i] == 'G')arr[2]--;
		else if (str[i] == 'T')arr[3]--;
		i++;
		j++;
		if (str[j] == 'A')arr[0]++;
		else if (str[j] == 'C')arr[1]++;
		else if (str[j] == 'G')arr[2]++;
		else if (str[j] == 'T')arr[3]++;
		if (arr[0] > A - 1 and arr[1] > C - 1 and arr[2] > G - 1 and arr[3] > T - 1) {
			count++;
		}
	}
	cout << count;
}