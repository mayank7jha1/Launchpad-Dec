#include<iostream>
#include<climits>
using  namespace std;


int Solve(int* height, int size, int k) {

	if (size <= 0) {
		return 0;
	}

	int final_ans = INT_MAX;

	for (int i = 1; i <= k; i++) {
		if (size - i < 0) {
			continue;
		}
		int cost = abs(height[size] - height[size - i]);

		int value = Solve(height, size - i, k);

		final_ans = min(final_ans, cost + value);
	}

	return final_ans;
}

int main() {
	int n;
	int k;
	cin >> n >> k;
	int height[n];
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}


	cout << Solve(height, n - 1, k) << endl;

}