#include<iostream>
#include<vector>
#include<climits>
using  namespace std;


int Solve(int i, vector<int>&dp, vector<int>v) {

	if (i == v.size() - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}
	int op1 = INT_MAX;
	int op2 = INT_MAX;

	op1 = abs(v[i] - v[i + 1]) + Solve(i + 1, dp, v);

	if (i + 2 <= v.size() - 1) {
		op2 = abs(v[i] - v[i + 2]) + Solve(i + 2, dp, v);
	}

	//cout << op1 << " ";
	return dp[i] = min(op1, op2);

}

int main() {
	int n;
	cin >> n;


	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int>dp(n + 1, -1);

	// for (auto x : dp) {
	// 	cout << x << " ";
	// }
	// cout << endl;
	cout << Solve(0, dp, v);
}