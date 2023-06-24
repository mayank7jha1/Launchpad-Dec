#include<iostream>
using  namespace std;
char grid[1002][1002];
#define mod 1000000007
#define int long long


int Solve(int h, int w) {
	int dp[h + 1][w + 1] = {0};
	dp[h][w] = 1;

	for (int i = h; i >= 1; i--) {
		for (int j = w; j >= 1; j--) {
			if (j == w and i == h) {
				continue;
			}

			if (grid[i][j] == '#') {
				dp[i][j] = 0;
			} else {
				if (i == h) {
					dp[i][j] = (dp[i][j + 1]) % mod;
				} else if (j == w) {
					dp[i][j] = (dp[i + 1][j]) % mod;
				} else {
					dp[i][j] = ((dp[i + 1][j]) % mod +
					            (dp[i][j + 1]) % mod) % mod;
				}
			}
		}
	}

	return dp[1][1];
}

int32_t main() {
	int h, w;
	cin >> h >> w;

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> grid[i][j];
		}
	}

	cout << Solve(h, w) << endl;
}