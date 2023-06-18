#include<iostream>
#include<vector>
#include<climits>
using  namespace std;


int Solve(int i, vector<int>&dp, vector<int>v, int k) {
	if (i >= v.size()) {
		return 1e9;
	}

	if (i == v.size() - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}
	int ans = INT_MAX;

	for (int j = 1; j <= k; j++) {
		ans = min(ans, abs(v[i] - v[i + j]) +
		          Solve(i + j, dp, v, k));
	}

	return dp[i] = ans;

}

int main() {
	int n, k;
	cin >> n >> k;


	vector<int>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int>dp(n + 1, -1);

	cout << Solve(0, dp, v, k);
}






