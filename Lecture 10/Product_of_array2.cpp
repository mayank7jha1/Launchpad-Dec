#include<iostream>
using  namespace std;

int main() {


	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int pre[n];
	for (int i = 0; i < n; i++) {
		pre[i] = 1;
	}

	pre[0] = a[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] * a[i];
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << pre[i] << " ";
	// }
	// cout << endl;
	//Shifting the prefix array

	for (int i = n - 1; i >= 0; i--) {
		pre[i] = pre[i - 1];
	}

	pre[0] = 1;

	// for (int i = 0; i < n; i++) {
	// 	cout << pre[i] << " ";
	// }


	//Building the suffix array

	int suffix[n];

	suffix[n - 1] = a[n - 1];

	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = suffix[i + 1] * a[i];
	}

	//cout << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << suffix[i] << " ";
	// }

	//Shifting the suffix array

	for (int i = 0; i < n - 1; i++) {
		suffix[i] = suffix[i + 1];
	}
	suffix[n - 1] = 1;
	//cout << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << suffix[i] << " ";
	// }

	int product[n];

	for (int i = 0; i < n; i++) {
		product[i] = 1;
	}
	//cout << endl;
	for (int i = 0; i < n; i++) {
		//cout << pre[i] << " ";
		product[i] = pre[i] * suffix[i];
	}
	//cout << endl;
	for (int i = 0; i < n; i++) {
		cout << product[i] << " ";
	}

}









