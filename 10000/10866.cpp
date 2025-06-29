#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int deque[200003];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, tmp;
	string str;
	cin >> N;
	int head = 100001;
	int tail = 100002;
	while (N--) {
		cin >> str;
		if (str == "push_front") {
			cin >> tmp;
			deque[head] = tmp;
			head--;
		}
		else if (str == "push_back") {
			cin >> tmp;
			deque[tail] = tmp;
			tail++;
		}
		else if (str == "pop_front") {
			if (head == tail - 1)cout << "-1" << "\n";
			else {
				head++;
				cout << deque[head] << "\n";
			}
		}
		else if (str == "pop_back") {
			if (head == tail - 1)cout << "-1"<<"\n";
			else {
				tail--;
				cout << deque[tail] << "\n";
			}
		}
		else if (str == "size") {
			cout << tail - head - 1<<"\n";
		}
		else if (str == "empty") {
			if (head == tail - 1)cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (str == "front") {
			if (head == tail - 1)cout << "-1" << "\n";
			else cout << deque[head+1] << "\n";
		}
		else if (str == "back") {
			if (head == tail - 1)cout << "-1" << "\n";
			else cout << deque[tail-1] << "\n";
		}
	}
}