#include<iostream>
using  namespace std;

#include<algorithm>
#include<bits/stdc++.h>
#define int long long
int n, m;
int a[5005], b[5005], dp[5005][5005];

int Valentine_Magic(int i, int j) {

	if (i == n) {
		return 0;
	}

	if (j == m) {
		return 1e9;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	int op1 = 0 + Valentine_Magic(i, j + 1);

	int op2 = abs(a[i] - b[j]) + Valentine_Magic(i + 1, j + 1);

	// int op3 = 0 + Valentine_Magic(i + 1, j); Not Allowed

	return dp[i][j] = min(op1, op2);

}

int32_t main() {
	cin >> n >> m;
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);

	int ans = Valentine_Magic(0, 0);
	cout << ans << endl;
}