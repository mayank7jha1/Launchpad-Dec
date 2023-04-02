#include<iostream>
#include<climits>
using  namespace std;

int Solve(int* height, int size) {

	if (size <= 0) {
		return 0;
	}

	int op1 = INT_MAX, op2 = INT_MAX;

	if (size - 1 >= 0) {
		int cost = abs(height[size] - height[size - 1]);
		int value = Solve(height, size - 1);
		op1 = cost + value;
	}

	if (size - 2 >= 0) {
		int cost = abs(height[size] - height[size - 2]);
		int value = Solve(height, size - 2);
		op2 = cost + value;
	}

	return min(op1, op2);
}

int main() {
	int n;
	cin >> n;
	int height[n];
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	cout << Solve(height, n - 1) << endl;
}