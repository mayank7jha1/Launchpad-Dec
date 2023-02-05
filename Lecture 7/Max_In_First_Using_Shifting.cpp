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

	//int temp = maximum;//a[maximum_element_index]
	int i = maximum_element_index;

	while (i >= 1) {
		a[i] = a[i - 1];
		i--;
	}

	a[0] = maximum;


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}