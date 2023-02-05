#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int key;
	cin >> key;

	int flag = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			cout << "Yes" << " " << i << endl;
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		cout << "No" << " " << -1 << endl;
	}

}