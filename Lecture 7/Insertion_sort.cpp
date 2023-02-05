#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		int temp = a[i];
		int j = i - 1;
		while (j >= 0 and a[j] > temp) {
			//Shifting
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}