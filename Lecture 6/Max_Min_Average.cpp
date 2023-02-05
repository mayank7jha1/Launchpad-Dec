#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int sum = 0;
	int maximum = INT_MIN;
	int minimum = INT_MAX;

	for (int i = 0; i < n; i++) {

		sum = sum + a[i];

		if (maximum < a[i]) {
			maximum = a[i];
		}
		if (minimum > a[i]) {
			minimum = a[i];
		}

	}

	cout << (sum / n) << " " <<
	     maximum << " " << minimum << endl;






}