#include<iostream>
#include<algorithm>
using  namespace std;
#define int long long
int n, p, k;
#define max 200005

int cost[max] = {0};

int Price() {
	int dp[max] = {0};
	sort(cost, cost + n);

	for (int i = 0; i < n; i++) {
		if (i < k - 1) {
			dp[i] = cost[i] + ((i == 0) ? 0 : dp[i - 1]);
		} else if (i == k - 1) {
			dp[i] = cost[i];
		} else {
			dp[i] = dp[i - k] + cost[i];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (dp[i] <= p) {
			ans = i + 1;
		}
	}
	return ans;

}

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> p >> k;

		for (int i = 0; i < n; i++) {
			cin >> cost[i];
		}
		cout << Price() << endl;
	}
}






