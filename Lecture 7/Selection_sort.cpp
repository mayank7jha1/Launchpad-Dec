#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int minimum_element_index = -1;

	for (int i = 0; i < n - 1; i++) {
		minimum_element_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[minimum_element_index]) {
				minimum_element_index = j;
			}
		}
		int temp = a[minimum_element_index];
		a[minimum_element_index] = a[i];
		a[i] = temp;

	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}


}