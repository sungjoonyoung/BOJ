#include<iostream>
#include<string>
using namespace std;
int arr[7];
string name[7] = { "Network","ArtificialIntelligence","Startup","CyberSecurity","TestStrategy","Algorithm","DataAnalysis" };
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	for (int i = 0; i < 7; i++) {
		cin >> str;
		if (str == "Network")cin >> arr[0];
		else if (str == "ArtificialIntelligence")cin >> arr[1];
		else if (str == "Startup")cin >> arr[2];
		else if (str == "CyberSecurity")cin >> arr[3];
		else if (str == "TestStrategy")cin >> arr[4];
		else if (str == "Algorithm")cin >> arr[5];
		else if (str == "DataAnalysis")cin >> arr[6];
	}
	int maxnum = -1;
	int maxind = -1;
	for (int i = 0; i < 7; i++) {
		if (arr[i] > maxnum) {
			maxnum = arr[i];
			maxind = i;
		}
	}
	cout << name[maxind];
}