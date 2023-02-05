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

	//Find Min:
	//Swap first element i.e a[0] with
	//min element inside the array

	int minimum = INT_MAX;
	int minimum_element_index = -1;

	for (int i = 0; i < n; i++) {
		if (minimum > a[i]) {
			minimum = a[i];
			minimum_element_index = i;
		}
	}

	cout << minimum << " " <<
	     a[minimum_element_index] << endl;

	int temp = a[0];
	a[0] = a[minimum_element_index];
	a[minimum_element_index] = temp;


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}












}