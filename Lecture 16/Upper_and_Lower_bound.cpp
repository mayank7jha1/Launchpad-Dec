#include<iostream>
using  namespace std;


int Lower_Bound(int a[], int n, int x) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] >= x) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}


int Upper_Bound(int a[], int n, int x) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] > x) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}

bool Binary_Search(int a[], int n, int x) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == x) {
			return true;
		}
		else if (a[mid] > x) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return false;
}


int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x;
	cin >> x;
	cout << Lower_Bound(a, n, x) << endl;
	cout << Upper_Bound(a, n, x) << endl;
	cout << Binary_Search(a, n, x) << endl;

	int ans1 = Lower_Bound(a, n, x);
	int ans2 = Upper_Bound(a, n, x);

	cout << ans2 - ans1 << endl;
}














//ans=-1:

//either element does not exist

//there is no possible way tto have
//upper / lower bound for this x.



//lower : >=
//upper: >












