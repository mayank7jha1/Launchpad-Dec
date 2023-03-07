#include<iostream>
using  namespace std;

int main() {
	int n = 6;
	int a[] = {1, 2, 3, 3, 4, 5};

	// int a1[6];

	int* ptr = new int[] {10, 11, 12, 13, 14, 15};

	// int* ptr1 = new int[6];

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << ptr[i] << " ";
	}
}