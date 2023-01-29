#include<iostream>
using  namespace std;

int main() {
	char ch;
	int ans = 0;
	while (cin >> ch) {
		int x = ch - 48;
		ans = ans * 2 + x;
	}

	cout << ans << endl;
	int count = 0;

	while (ans > 0) {
		int bit = ans % 2;
		if (bit == 1) {
			break;
		}
		count++;
		ans = ans / 2;
	}
	cout << count << endl;
}