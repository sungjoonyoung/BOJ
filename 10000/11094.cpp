#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	string str;
	cin.ignore();
	for(int i=0;i<N;i++) {
		str.clear();
		int key1 = 1;
		int simon = 0;
		//cin.ignore();
		getline(cin, str);
		while (key1) {
			//cout << str;
			if (str.size() > 10) {
				if (str[0] == 'S' and str[1] == 'i' and str[2] == 'm' and str[3] == 'o' and str[4] == 'n' and str[5] == ' ' and str[6] == 's' and str[7] == 'a' and str[8] == 'y' and str[9] == 's') simon = 1;
				else break;
			}
			if (simon == 1) {
				for (int i = 10; i < str.size(); i++)cout << str[i];
				cout << " \n";
				break;
			}
			break;
		}
		
	}
}