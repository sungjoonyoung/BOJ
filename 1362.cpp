#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count = 0;
	while(1){
		int o, w;
		cin >> w >> o;
		if (o==0 and w==0)return 0;
		count++;
		bool death = 0;
		while (1) {
			char op;
			int opnum;
			cin >> op >> opnum;
			if (op == '#' and opnum == 0) {
				if(death)cout << count << " RIP\n";
				else if (w / 2 < o and o < w * 2)cout << count << " :-)\n";
				else cout << count << " :-(\n";
				break;
			}
			if (op == 'F') {
				o += opnum;
			}
			if (op == 'E') {
				o -= opnum;
				if (o <= 0)death = 1;
			}
		}
	}
}