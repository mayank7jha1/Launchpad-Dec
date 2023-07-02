#include<bits/stdc++.h>
using  namespace std;
#define mod 1000000007
#define int long long
int k;
int pre[100010] = {0};
int dp[100010] = {0};
int a, b;


int Solve(int len) {

	if (len == 0) {
		return 1;
	}
	if (dp[len] != -1) {
		return dp[len];
	}

	int Op1 = Solve(len - 1);

	int Op2 = 0;
	if (len >= k) {
		Op2 = Solve(len - k);
	}

	return dp[len] = (Op1 + Op2) % mod;

}

void Precompute() {
	memset(dp, -1, sizeof(dp));
	pre[0] = 0;

	for (int i = 1; i < 100005; i++) {
		// pre[i]=pre[i-1]+(Current Number of Flower
		// ko khane ka way).

		pre[i] = ((pre[i - 1]) % mod + (Solve(i)) % mod)
		         % mod;
	}
}

int32_t main() {
	int t;
	cin >> t >> k;
	Precompute();

	// for (int i = 0; i < 10; i++) {
	// 	cout << dp[i] << " ";
	// }

	while (t--) {
		cin >> a >> b;
		cout << ((pre[b]) % mod -
		         (pre[a - 1]) % mod) % mod << endl;
	}
}













