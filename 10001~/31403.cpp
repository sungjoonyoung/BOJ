#include<iostream>
using namespace std;
int main(void) {
	int A, B, C;
	cin >> A >> B >> C;
	cout << A + B - C<<"\n";
	int ten = 1;
	while (1){
		if (ten > B)break;
		ten *= 10;
	}
	cout << A * ten + B - C;

}