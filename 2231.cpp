#include<iostream>
using namespace std;
int ten[8] = {1,10,100,1000,10000,100000,1000000,10000000};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int num;
	cin >> num;
	int tmpsum, tmptmpsum;
	tmpsum = 1;
	int mimic;
	int tmpten1 = 0;
	for (int i = 1; i < 8; i++) {
		if (num < ten[i]) {
			tmpten1 = i;
			break;
		}
	}
	if (tmpten1 > 6) {
		tmpsum = num - (num % 1000);
	}
	while (1) {
		int tmpten;
		tmptmpsum = tmpsum;
		mimic = tmpsum;
		for (int i = 0; i < 8; i++) {
			if (tmpsum < ten[i]) {
				tmpten = i;
				break;
			}
		}
		for (int i = 0; i < tmpten; i++) {
			tmptmpsum += mimic / ten[tmpten -1 - i];
			//cout << tmptmpsum<<"\n";
			mimic -= (mimic / ten[tmpten - 1 - i])* ten[tmpten - 1 - i];
			//cout << mimic << "\n";
		}
		tmpsum++;
		if (tmptmpsum == num) {
			cout << tmpsum-1;
			break;
		}
		else if (tmpsum > num) {
			cout << "0";
			break;
		}
	}
}