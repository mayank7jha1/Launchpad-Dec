#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	int maximum = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (maximum < a[i]) {
			maximum = a[i];
		}
	}

	int freq[maximum + 1] = {0};


	for (int i = 0; i < n; i++) {
		int x = a[i];
		freq[x] = freq[x] + 1;
	}

	//Iterate over the frequency array

	for (int i = 0; i < maximum + 1; i++) {
		if (freq[i] == 1) {
			cout << i << endl;
			break;
		}
	}
}
















