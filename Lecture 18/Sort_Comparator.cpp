#include<iostream>
#include<algorithm>
using  namespace std;
bool compare(int x, int y) {
	if (x > y) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int a[] = {2, 1, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);
	sort(a, a + n);
	//sort(a, a + n, less<int>());
	// sort(a, a + n, greater<int>());

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a, a + n, compare);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}