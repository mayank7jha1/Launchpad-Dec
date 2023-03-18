#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n], b[n], c[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }

	//a,b,c

	int d[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> d[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << d[i][j] << " ";
		}
		cout << endl;
	}


	cout << a[4] << endl;

	cout << d[2][3] << endl;




}































