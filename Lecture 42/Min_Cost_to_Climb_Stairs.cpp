class Solution {
public:

	int Solve(vector<int>&cost, int i, int n, int* dp) {

		if (i >= n) {
			return 0;
		}

		if (dp[i] != -1) {
			return dp[i];
		}
		//You are taking a jump of 1 step
		int op1 = Solve(cost, i + 1, n, dp) + cost[i];

		//You are taking a jump of 2 step;
		int op2 = Solve(cost, i + 2, n, dp) + cost[i];

		return dp[i] = min(op1, op2);
	}

	int minCostClimbingStairs(vector<int>& cost) {
		int n = cost.size();
		int *dp = new int[n + 1];

		//Currently You are standing at the 0th Position.
		for (int i = 0; i < n; i++) {
			dp[i] = -1;
		}

		int Option1 = Solve(cost, 0, n, dp);

		//Currently You are standing at the 1th Position.
		for (int i = 0; i < n; i++) {
			dp[i] = -1;
		}
		int Option2 = Solve(cost, 1, n, dp);

		return min(Option1, Option2);

	}
};

class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {
		int n = cost.size();

		vector<int>dp = cost;

		for (int i = 2; i < n; i++) {
			dp[i] = dp[i] + min(dp[i - 1], dp[i - 2]);
		}

		return min(dp[n - 1], dp[n - 2]);
	}
};











