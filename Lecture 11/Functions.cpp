#include<iostream>
using  namespace std;

int x = 90;

int sum(int x) {
	cout << x << endl;
	x = 20;
	x = x + 50;
	return x;
}

int main() {

	int n;
	cin >> n;
	cout << x << endl;

	int x = 50;
	cout << x << endl;

	while (n--) {
		int x = 20;
		cout << x << endl;
	}
	x = sum(x);
	cout << x << endl;
}

