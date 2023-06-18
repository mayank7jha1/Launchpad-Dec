#include<iostream>
#include<cstring>
#include<vector>
using  namespace std;

int dp2[10005];

int fib(int n, vector<int>&dp) {
	if (n <= 1) {
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);

}
int fib2(int n, int* dp) {
	if (n <= 1) {
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	int op1 = fib2(n - 1, dp);
	int op2 = fib2(n - 2, dp);

	return dp[n] = op1 + op2;

}

int fib3(int n) {
	if (n <= 1) {
		return n;
	}

	if (dp2[n] != -1) {
		return dp2[n];
	}

	int op1 = fib3(n - 1);
	int op2 = fib3(n - 2);

	return dp2[n] = op1 + op2;

}

int main() {
	int n;
	cin >> n;
	int dp1[n + 1];

	vector<int>dp(n + 1, -1);

	for (int i = 0; i < n + 1; i++) {
		dp1[i] = -1;
	}

	cout << endl;

	for (int i = 0; i < n + 1; i++) {
		dp2[i] = -1;
	}

	cout << endl;
	cout << fib(n, dp) << endl;
	cout << fib2(n, dp1) << endl;
	cout << fib3(n) << endl;
}







