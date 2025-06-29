#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		if (str == "Algorithm")cout << "204\n";
		else if (str == "DataAnalysis")cout << "207\n";
		else if (str == "ArtificialIntelligence")cout << "302\n";
		else if (str == "CyberSecurity")cout << "B101\n";
		else if (str == "Network")cout << "303\n";
		else if (str == "Startup")cout << "501\n";
		else if (str == "TestStrategy")cout << "105\n";
	}
}