#include<iostream>
using  namespace std;

int main() {


	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int product = 1;
		for (int j = 0; j < n; j++) {
			ans++;
			if (j == i) {
				continue;
			}
			product = product * a[j];
		}

		//cout << product << " ";
	}
	cout << ans << endl;

	// cout << endl;

	// int product2 = 1;
	// for (int i = 0; i < n; i++) {
	// 	product2 = product2 * a[i];
	// }

	// for (int i = 0; i < n; i++) {
	// 	cout << product2 / a[i] << " ";
	// }

}










