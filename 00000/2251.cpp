#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
bool visited[201][201][201];
bool cvisited[201];
struct bottle{
	int A, B, C;
};
queue<bottle> q;
vector<int> outv;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	q.push({ 0,0,c });
	visited[0][0][c] = 1;
	if (!cvisited[c])outv.push_back(c);
	cvisited[c] = 1;
	while (!q.empty()) {
		int tmpa = q.front().A;
		int tmpb = q.front().B;
		int tmpc = q.front().C;
		q.pop();
		//a->c
		if (c - tmpc and tmpa) {
			int give = min(c - tmpc, tmpa);
			if (!visited[tmpa - give][tmpb][tmpc + give]) {
				if(tmpa - give ==0 and !cvisited[tmpc + give])
				{
					outv.push_back(tmpc + give);
					cvisited[tmpc + give] = 1;
				}
				q.push({ tmpa - give,tmpb,tmpc + give });
				visited[tmpa - give][tmpb][tmpc + give] = 1;
			}
		}
		//a->b
		if (b - tmpb and tmpa) {
			int give = min(b - tmpb, tmpa);
			if (!visited[tmpa - give][tmpb+give][tmpc]) {
				if (tmpa -give == 0 and !cvisited[tmpc])
				{
					outv.push_back(tmpc);
					cvisited[tmpc] = 1;
				}
				q.push({ tmpa - give,tmpb + give,tmpc });
				visited[tmpa - give][tmpb + give][tmpc] = 1;
			}
		}
		//b->a
		if (a - tmpa and tmpb) {
			int give = min(a - tmpa, tmpb);
			if (!visited[tmpa + give][tmpb - give][tmpc]) {
				q.push({ tmpa + give,tmpb - give,tmpc });
				visited[tmpa + give][tmpb - give][tmpc] = 1;
			}
		}
		//b->c
		if (c - tmpc and tmpb) {
			int give = min(c - tmpc, tmpb);
			if (!visited[tmpa][tmpb-give][tmpc + give]) {
				if (tmpa==0 and !cvisited[tmpc + give])
				{
					outv.push_back(tmpc + give);
					cvisited[tmpc + give] = 1;
				}
				q.push({ tmpa,tmpb-give,tmpc + give });
				visited[tmpa][tmpb-give][tmpc + give] = 1;
			}
		}
		//c->a
		if (a - tmpa and tmpc) {
			int give = min(a - tmpa, tmpc);
			if (!visited[tmpa + give][tmpb][tmpc - give]) {
				if (tmpa + give == 0 and !cvisited[tmpc - give])
				{
					outv.push_back(tmpc - give);
					cvisited[tmpc - give] = 1;
				}
				q.push({ tmpa + give,tmpb,tmpc - give });
				visited[tmpa + give][tmpb][tmpc - give] = 1;
			}
		}
		//c->b
		if (b - tmpb and tmpc) {
			int give = min(b - tmpb, tmpc);
			if (!visited[tmpa][tmpb+give][tmpc - give]) {
				if (tmpa==0 and !cvisited[tmpc - give])
				{
					outv.push_back(tmpc - give);
					cvisited[tmpc - give] = 1;
				}
				q.push({ tmpa,tmpb+give,tmpc - give });
				visited[tmpa][tmpb+give][tmpc - give] = 1;
			}
		}
	}
	sort(outv.begin(), outv.end());
	for (int i = 0; i < outv.size(); i++) cout << outv[i] << " ";
}