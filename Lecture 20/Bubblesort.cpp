#include<iostream>
using  namespace std;

void bubblesort(int *a, int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}


}

void bubblesort_recursive(int* a, int n, int i) {

	if (i == n - 1) {
		return;
	}

	for (int j = 0; j < n - i - 1; j++) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	bubblesort_recursive(a, n, i + 1);

}

int main() {
	int n;
	cin >> n;


	int a[n];
	int b[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	bubblesort(a, n);
	bubblesort_recursive(b, n, 0);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
}