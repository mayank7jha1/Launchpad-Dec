#include<iostream>
using  namespace std;

int main() {
	char ch;
	int x = 0, y = 0;
	while (cin >> ch) {
		if (ch == 'N') {
			y++;
		} else if (ch == 'S') {
			y--;
		} else if (ch == 'E') {
			x++;
		} else {
			x--;
		}
	}
	cout << x << " " << y << endl;

	if (x > 0) {
		while (x > 0) {
			cout << "E";
			x--;
		}
	} else if (x < 0) {
		while (x < 0) {
			cout << "W";
			x++;
		}
	}

	if (y > 0) {
		while (y > 0) {
			cout << "N";
			y--;
		}
	} else if (y < 0) {
		while (y < 0) {
			cout << "S";
			y++;
		}

	}
}