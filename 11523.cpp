#include<iostream>
using namespace std;
long long dp[1001][1001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i <= 100; i++)dp[i][0] = 1;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <i; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]);
		}
		dp[i][i] = 1;
	}
    int N;
    cin>>N;
    while(N--){
        int n,k;
        cin>>n>>k;
        long long answer=0;
        k/=2;
        int two=k/2;
        int one=k%2;
        while(two>=one){
            //cout<<two<<" "<<one<<"A\n";
            answer+=dp[two+one][one]*dp[two+one][one];
            two-=1;
            one+=2;
        }
        cout<<n<<" "<<answer<<"\n";
    }
}