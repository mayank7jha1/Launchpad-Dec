#include <bits/stdc++.h>
using  namespace std;
#define int long long

int n, k;
int* taste;
int* calorie;
#define size 200005
int dp[100][size];

int Solve(int i, int sum) {

	if (i == n) {
		if (sum == 0) {
			//This is a Valid Path.
			return 0;
		} else {
			//This should not be consired as a valid path.
			return -1e9;
		}
	}

	if (dp[i][sum] != -1) {
		return dp[i][sum];
	}

	int op1 = taste[i] + Solve(i + 1,
	                           sum + (taste[i] - k * calorie[i]));
	int op2 = 0 + Solve(i + 1, sum);

	return dp[i][sum] = max(op1, op2);
}


int32_t main() {
	cin >> n >> k;
	taste = new int[n];
	calorie = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> taste[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> calorie[i];
	}
	memset(dp, -1, sizeof(dp));
	int ans = Solve(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}




