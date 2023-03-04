#include<iostream>
using  namespace std;

int findMin(int a[], int n) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {

		int mid = (s + e) / 2;

		if (a[mid] <= a[n - 1]) {
			ans = a[mid];
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return ans;
}

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << findMin(a, n) << endl;
}