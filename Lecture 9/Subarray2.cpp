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
	int ans = 0;
	int maximum = INT_MIN;
	for (int i = 0; i < n; i++) {
		//i th loop represent the starting point
		//of the subarray.

		for (int j = i; j < n; j++) {
			//j th loop represent the ending point
			//of  subarray.
			int sum = 0;
			for (int k = i; k <= j; k++) {
				//This loop is for only printing
				// ans++;
				//cout << a[k] << " ";
				sum = sum + a[k];
			}
			if (maximum < sum) {
				maximum = sum;
			}
			//cout << sum << endl;
		}

	}
	cout << maximum << " ";
	//cout << ans << endl;
	//cout << "Mayank";
}





