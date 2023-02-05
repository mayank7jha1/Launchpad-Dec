#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k;
	cin >> k;

	k = k % n;

	//Reversing the array
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	//Reversing first k-1 elements

	for (int i = 0, j = n - k - 1; i < j; i++, j--) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	//Reverse after first sk elements
	for (int i = n - k, j = n - 1; i < j; i++, j--) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}






}