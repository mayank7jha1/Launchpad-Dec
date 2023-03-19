#include<iostream>
using  namespace std;

bool IsSorted(int a[], int n, int index) {

	//Base Case:
	if (index == n - 1) {
		return true;
	}


	//Task:
	if (a[index] > a[index + 1]) {
		return false;
	}


	//Next Stage
	return IsSorted(a, n, index + 1);
}

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << IsSorted(a, n, 0) << endl;
}