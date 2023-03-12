#include<iostream>
using  namespace std;
#define int long long

const int N = 1e7;
// static int N1 = 0;

int mp[N] = {0};
int mp1[N] = {0};

int32_t main() {
	int n;
	cin >> n;

	int a[n];
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}
	if (s % 2 == 1) {
		cout << "NO" << endl;
		return 0;
	}

	s = s / 2;
	// s/=2;

	int ls = 0;

	for (int i = 0; i < n; i++) {
		// ls += a[i];
		ls = ls + a[i];

		mp[a[i]]++;

		if (mp[ls - s] > 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	// for (int i = 0; i < 1e7; i++) {
	// 	mp[i] = 0;
	// }

	// memset(a, 0, sizeof(a));

	int rs = 0;
	for (int i = n - 1; i >= 0; i--) {
		rs = rs + a[i];

		mp1[a[i]]++;

		if (mp1[rs - s] > 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

}






































