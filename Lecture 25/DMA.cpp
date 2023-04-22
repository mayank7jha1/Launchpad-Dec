#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int b[n];
	//int b[2 * n];

	int *ptr = new int[n] {0};

	for (int i = 0; i < n; i++) {
		cin >> ptr[i];
	}

	//Memory Leak
	delete[]ptr;

	ptr = new int[2 * n];

	for (int i = 0; i < 2 * n; i++) {
		cin >> ptr[i];
	}

	for (int i = 0; i < 2 * n; i++) {
		cout << ptr[i] << " ";
	}
}