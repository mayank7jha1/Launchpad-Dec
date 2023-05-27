#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int i = 0;
	int j = n - 1;
	int k = 0;//Sereja ki chance hain even par.

	int s = 0, d = 0;
	while (i <= j) {

		if (a[i] >= a[j] and k % 2 == 0) {
			s += a[i];
			i++;
		} else if (a[j] >= a[i] and k % 2 == 0) {
			s += a[j];
			j--;
		} else if (a[i] >= a[j] and k % 2 == 1) {
			d += a[i];
			i++;
		} else if (a[j] >= a[i] and k % 2 == 1) {
			d += a[j];
			j--;
		}

		k++;
	}

	// if (i == j and k % 2 == 0) {
	// 	s += a[i];
	// } else {
	// 	d += a[i];
	// }

	cout << s << " " << d << endl;
}















