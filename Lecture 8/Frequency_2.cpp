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
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		// if (maximum < a[i]) {
		// 	maximum = a[i];
		// }
	}

	for (int i = 0; i < n; i++) {
		ans++;
		if (maximum < a[i]) {
			maximum = a[i];
		}
	}


	// Idea: Iterate over the entire array a
	// while iterating over the array
	// build the frequency array.


	int freq[maximum + 1] = {0};

	// for (int i = 0; i < maximum + 1; i++) {
	// 	freq[i] = 0;
	// }

	for (int i = 0; i < n; i++) {
		int x = a[i];
		ans++;

		//freq[a[i]]++;

		// freq[x]++;
		freq[x] = freq[x] + 1;
	}

	// for (int i = 0; i < maximum + 1; i++) {
	// 	if (freq[i] > 0) {
	// 		cout << "The freq of element " << i << " is " << freq[i] << endl;
	// 	}
	// }

	cout << ans << endl;

}























