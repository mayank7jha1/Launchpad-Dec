#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using  namespace std;

int main() {
	int n = 5;

	int a[] = {2, 3, 1, 0, 5};
	int *b = new int[5] {1, 0, 0, 5, 4};
	vector<int>v{4, 3, 2, 1, 5};


	sort(a, a + n);
	sort(b, b + n);
	sort(v.begin(), v.end());

	for (auto x : a) {
		cout << x << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	// cout << endl;
	// for (auto x : b) {
	// 	cout << x << " ";
	// }

	for (int x : v) {
		cout << x << " ";
	}
}




