#include<iostream>
using  namespace std;

int main() {
	char ch;
	cin >> ch;
	cout << ch << endl;

	cout << ch - '0' << endl;
	int n;
	cin >> n;
	char ch1[20];

	// cin >> ch1;
	// cout << ch1 << endl;

	int i;
	for ( i = 0; i < n; i++) {
		cin >> ch1[i];
	}
	ch1[i] = '\0';

	cout << ch1 << endl;
	cout << endl;
}







