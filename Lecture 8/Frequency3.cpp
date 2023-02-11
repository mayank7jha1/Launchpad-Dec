#include<iostream>
#include<climits>
using  namespace std;

//+ve Numbers

int main() {
	int n;
	cin >> n;

	int a[n];
	int ans = 0;
	int maximum = INT_MIN;
	int minimum = INT_MAX;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}

	for (int i = 0; i < n; i++) {
		ans++;
		if (maximum < a[i]) {
			maximum = a[i];
		}
		if (minimum > a[i]) {
			minimum = a[i];
		}
	}


	// Idea: Iterate over the entire array a
	// while iterating over the array
	// build the frequency array.


	int freq[maximum - minimum + 1] = {0};

	for (int i = 0; i < n; i++) {
		int x = a[i];
		ans++;
		freq[x - minimum] = freq[x - minimum] + 1;
	}

	for (int i = 0; i < maximum - minimum + 1; i++) {
		if (freq[i] > 0) {
			cout << "The freq of element " << i + minimum << " is " << freq[i] << endl;
		}
	}

	//cout << ans << endl;

}























