#include<iostream>
using  namespace std;

int dp[10005];

int fib(int n) {

	if (n <= 1) {
		return n;
	}

	cout << dp[n] << " ";

	if (dp[n] != -1) {
		return dp[n];
	}

	int op1 = fib(n - 1);
	int op2 = fib(n - 2);

	return dp[n] = op1 + op2;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		dp[i] = -1;
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << dp[i] << " ";
	// }
	cout << fib(n) << endl;
}