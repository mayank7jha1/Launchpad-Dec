#include<iostream>
#include<climits>
using namespace std;


int main() {
	char ch;
	while (cin >> ch) {

		if (ch >= 97 and ch <= 122) {
			ch = ch - 32;
			//cout << ch;
		} else if (ch >= 65 and ch <= 90) {
			ch = ch + 32;
			//cout << ch;
		}
		cout << ch;
	}

}