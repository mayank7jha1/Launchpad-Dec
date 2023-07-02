#include<bits/stdc++.h>
using  namespace std;
#define mod 1000000007
#define int long long
int k;
int pre[100010] = {0};
int dp[100010] = {0};
int a, b;
int t;

int32_t main() {
	cin >> t >> k;
	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= 100005; i++) {
		if (i >= k) {
			dp[i] = dp[i - k] + dp[i - 1];
		} else {
			dp[i] = dp[i - 1];
		}
	}

	pre[0] = 0;
	for (int i = 1; i <= 100005; i++) {
		pre[i] = pre[i - 1] + dp[i];
	}

	while (t--) {
		cin >> a >> b;
		cout << pre[b] - pre[a - 1] << endl;
	}
}










