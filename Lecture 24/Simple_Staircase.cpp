#include<iostream>
#include<climits>
using  namespace std;

int Simple_Staircase(int* cost, int n) {

	if (n < 0) {
		return 0;
	}


	int op1 = INT_MAX, op2 = INT_MAX;


	op1 = cost[n] + Simple_Staircase(cost, n - 1);
	op2 = cost[n] + Simple_Staircase(cost, n - 2);

	// int ans = INT_MAX;

	// for (int i = 1; i <= k; i++) {
	// 	int value = Simple_Staircase(cost, n - i);
	// 	ans = min(ans, value + cost[n]);
	// }

	return min(op1, op2);
}


int main() {
	int n;
	cin >> n;

	int cost[n];
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
	}

	cout << Simple_Staircase(cost, n - 1);
}