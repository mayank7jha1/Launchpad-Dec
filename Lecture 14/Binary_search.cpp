#include<iostream>
using  namespace std;

int Binary_Search(int a[], int n, int target) {

	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == target) {
			ans = mid;
			return ans;
		} else if (a[mid] > target) {
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
	int target;
	cin >> target;
	cout << Binary_Search(a, n, target) << endl;
}



