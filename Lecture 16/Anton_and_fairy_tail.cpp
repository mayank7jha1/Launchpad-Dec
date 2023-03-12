#include<iostream>
using  namespace std;
#define int long long



int32_t main() {
	int n, m;
	cin >> n >> m;
	int ans;

	if (m >= n) {
		cout << n << endl;
		return 0;
	} else {
		int s = 0;
		//int e = 10000000000;
		int e = 1e10;
		int target = n - m;
		while (s <= e) {
			int mid = (s + e) / 2;
			int d = (mid * (mid + 1)) / 2;
			if (d >= target) {
				ans = mid;
				e = mid - 1;
			} else {
				s = mid + 1;
			}
		}

		cout << m + ans << endl;
	}

}





