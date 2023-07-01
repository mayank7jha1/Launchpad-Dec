class Solution {
public:
	int minDistance(string a, string b) {
		int dp[502][502];

		int n = a.size();
		int m = b.size();

		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				if (i == 0) {
					dp[i][j] = j;
				} else if (j == 0) {
					dp[i][j] = i;
				} else if (a[i - 1] == b[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1];
				} else {
					dp[i][j] =
					    1 + min({dp[i - 1][j], dp[i - 1][j - 1],
					             dp[i][j - 1]
					            });
				}
			}
		}
		return dp[n][m];
	}
};