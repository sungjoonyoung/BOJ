#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
bool visited[201][201][201];
bool cvisited[201];
int a, b, c;
void dfs(int tmpa,int tmpb,int tmpc){
    //a->c
    if (c - tmpc and tmpa) {
        int give = min(c - tmpc, tmpa);
        if (!visited[tmpa - give][tmpb][tmpc + give]) {
            if(tmpa - give ==0 and !cvisited[tmpc + give])cvisited[tmpc + give] = 1;
            visited[tmpa - give][tmpb][tmpc + give] = 1;
            dfs(tmpa - give,tmpb,tmpc + give);
        }
    }
    //a->b
    if (b - tmpb and tmpa) {
        int give = min(b - tmpb, tmpa);
        if (!visited[tmpa - give][tmpb+give][tmpc]) {
            if (tmpa -give == 0 and !cvisited[tmpc])cvisited[tmpc] = 1;
            visited[tmpa - give][tmpb + give][tmpc] = 1;
            dfs(tmpa - give,tmpb + give,tmpc);
        }
    }
    //b->a
    if (a - tmpa and tmpb) {
        int give = min(a - tmpa, tmpb);
        if (!visited[tmpa + give][tmpb - give][tmpc]) {
            visited[tmpa + give][tmpb - give][tmpc] = 1;
            dfs(tmpa + give,tmpb - give,tmpc);
        }
    }
    //b->c
    if (c - tmpc and tmpb) {
        int give = min(c - tmpc, tmpb);
        if (!visited[tmpa][tmpb-give][tmpc + give]) {
            if (tmpa==0 and !cvisited[tmpc + give])cvisited[tmpc + give] = 1;
            visited[tmpa][tmpb-give][tmpc + give] = 1;
            dfs(tmpa,tmpb-give,tmpc + give);
        }
    }
    //c->a
    if (a - tmpa and tmpc) {
        int give = min(a - tmpa, tmpc);
        if (!visited[tmpa + give][tmpb][tmpc - give]) {
            if (tmpa + give == 0 and !cvisited[tmpc - give])cvisited[tmpc - give] = 1;
            visited[tmpa + give][tmpb][tmpc - give] = 1;
            dfs(tmpa + give,tmpb,tmpc - give);
        }
    }
    //c->b
    if (b - tmpb and tmpc) {
        int give = min(b - tmpb, tmpc);
        if (!visited[tmpa][tmpb+give][tmpc - give]) {
            if (tmpa==0 and !cvisited[tmpc - give])cvisited[tmpc - give] = 1;
            visited[tmpa][tmpb+give][tmpc - give] = 1;
            dfs(tmpa,tmpb+give,tmpc - give);
        }
    }
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> c;
	visited[0][0][c] = 1;
	cvisited[c] = 1;
    dfs(0,0,c);
    for(int i=0;i<=200;i++){
        if(cvisited[i])cout<<i<<" ";
    }
}