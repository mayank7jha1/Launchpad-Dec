#include<iostream>
using  namespace std;

int findPeakElement(int a[], int n) {

	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int  mid = (s + e) / 2;
		if (mid + 1 == n or a[mid] >= a[mid + 1]) {
			ans = mid;
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

	cout << findPeakElement(a, n) << endl;
}
