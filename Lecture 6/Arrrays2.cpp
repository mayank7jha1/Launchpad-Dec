#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	//&: Address of operator

	cout << &n << endl;
	int y = 10;
	cout << &y << endl;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << &a << endl;
	cout << &a[0] << endl;
	cout << &a[1] << endl;
}

//140702039476160
//140702039476164

//140702039476196
//140702039476192








