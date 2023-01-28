#include<iostream>
#include<climits>
using namespace std;


int main() {
	int n;
	cin >> n;
	int rev = 0;
	while (n > 0) {
		int digit = n % 10;
		n = n / 10;
		rev = rev * 10 + digit;
	}

	while (rev > 0) {
		int digit = rev % 10;
		char ch = digit + 48;
		cout << ch;
		rev = rev / 10;
	}
}