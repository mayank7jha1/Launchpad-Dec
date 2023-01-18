#include<iostream>
using namespace std;
// const int N = 0;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a > b and a > c) {
		cout << a << endl;
	} else if (b > c and b > a) {
		cout << b << endl;
	} else {
		cout << c << endl;
	}
}