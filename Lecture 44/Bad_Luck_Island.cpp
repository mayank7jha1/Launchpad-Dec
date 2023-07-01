#include<bits/stdc++.h>
using  namespace std;
#define int long long
int r, s, p;
double dp[101][101][101];

double SolveRocks(int r, int p, int s) {
	if (p == 0) {
		return 1.0;
	}

	if (r == 0 or s == 0) {
		return 0.0;
	}

	if (dp[r][p][s] > -1.0) {
		return dp[r][p][s];
	}

	double ans = 0;
	double total = ((r * s) + (p * s) + (r * p));

	//R*P:
	ans += ((r * p) / total) *
	       SolveRocks(r - 1, p, s);

	//P*S
	ans += ((p * s) / total) *
	       SolveRocks(r, p - 1, s);

	//R*S
	ans += ((r * s) / total) *
	       SolveRocks(r, p, s - 1);

	return dp[r][p][s] = ans;
}

double SolvePaper(int r, int p, int s) {
	if (s == 0) {
		return 1.0;
	}

	if (p == 0 or  r == 0) {
		return 0.0;
	}

	if (dp[r][p][s] > -1.0) {
		return dp[r][p][s];
	}

	double ans = 0;
	double total = ((r * s) + (p * s) + (r * p));

	//R*P:
	ans += ((r * p) / total) *
	       SolvePaper(r - 1, p, s);

	//P*S
	ans += ((p * s) / total) *
	       SolvePaper(r, p - 1, s);

	//R*S
	ans += ((r * s) / total) *
	       SolvePaper(r, p, s - 1);

	return dp[r][p][s] = ans;
}

double SolveScissor(int r, int p, int s) {
	if (r == 0) {
		return 1.0;
	}

	if (s == 0 or p == 0) {
		return 0.0;
	}

	if (dp[r][p][s] > -1.0) {
		return dp[r][p][s];
	}

	double ans = 0;
	double total = ((r * s) + (p * s) + (r * p));

	//R*P:
	ans += ((r * p) / total) *
	       SolveScissor(r - 1, p, s);

	//P*S
	ans += ((p * s) / total) *
	       SolveScissor(r, p - 1, s);

	//R*S
	ans += ((r * s) / total) *
	       SolveScissor(r, p, s - 1);

	return dp[r][p][s] = ans;
}



int32_t main() {
	cin >> r >> s >> p;

	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) <<
	     SolveRocks(r, p, s) << " ";

	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) <<
	     SolveScissor(r, p, s) << " ";

	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) <<
	     SolvePaper(r, p, s) << " ";


}








