#include<iostream>
using  namespace std;
#include<climits>



int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int pre[n + 1] = {0};

	int sum = 0;

	// for (int i = 0; i < n; i++) {
	// 	sum = sum + a[i];
	// 	pre[i] = sum;
	// }

	pre[0] = a[0];

	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
}














