#include<bits/stdc++.h>
using  namespace std;
#define int long long
#define mod 1000000007


int Solve(vector<int>&a, int n, int k) {

	int dp[n + 2][k + 2];

	for (int j = 0; j <= k; j++) {

		if (j <= a[1]) {
			dp[1][j] = 1;
		} else {
			dp[1][j] = 0;
		}

	}


	for (int i = 2; i <= n; i++) {

		for (int j = 0; j <= k; j++) {

			if (j == 0) {

				dp[i][j] = dp[i - 1][j];
				dp[i][j] %= mod;

			} else {

				int A = dp[i][j - 1] % mod;
				int B = dp[i - 1][j] % mod;
				int C;

				if ((j - a[i] - 1) >= 0) {
					C = (dp[i - 1][j - a[i] - 1]) % mod;
				} else {
					C = 0;
				}

				dp[i][j] = (mod + A + B - C) % mod;
			}
		}
	}

	return dp[n][k];
}


int32_t main() {
	int n, k;
	cin >> n >> k;

	vector<int>v(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	cout << Solve(v, n, k) << endl;
}




