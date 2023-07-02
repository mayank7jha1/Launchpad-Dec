#include<bits/stdc++.h>
using  namespace std;
#define int long long
int n, h, l, r;
int a[2005];
int dp[2005][2005];

int Solve(int i, int walking_hour) {

	if (i == n) {
		return 0;
	}

	if (dp[i][walking_hour] != -1) {
		return dp[i][walking_hour];
	}

	int x = (walking_hour + a[i]) % h;
	int y = (walking_hour + a[i] - 1) % h;

	int ans = 0, ans1 = 0;

	if (x >= l and x <= r) {
		ans = 1;
	}

	if (y >= l and y <= r) {
		ans1 = 1;
	}

	int op1 = ans + Solve(i + 1, x);
	int op2 = ans1 + Solve(i + 1, y);


	return dp[i][walking_hour] = max(op2, op1);
}

int32_t main() {
	cin >> n >> h >> l >> r;
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Solve(0, 0) << endl;

}