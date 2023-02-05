#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int maximum = INT_MIN;
	int maximum_element_index = -1;

	for (int i = 0; i < n; i++) {
		if (maximum < a[i]) {
			maximum = a[i];
			maximum_element_index = i;
		}
	}

	cout << a[maximum_element_index] << endl;

	int temp = a[maximum_element_index];
	a[maximum_element_index] = a[n - 1];
	a[n - 1] = temp;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}







}