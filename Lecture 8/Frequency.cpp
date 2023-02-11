#include<iostream>
using  namespace std;

//+ve Numbers

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int temp = a[i];
		int count = 0;

		if (a[i] != -1) {
			for (int j = 0; j < n; j++) {
				ans++;
				if (a[j] == temp) {
					count++;
					a[j] = -1;
				}
			}
			//cout << "The Frequency of " << temp << " is " << count << endl;
		}
	}
	cout << ans << endl;
}











