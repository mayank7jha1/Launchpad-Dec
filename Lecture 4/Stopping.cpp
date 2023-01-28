#include<iostream>
#include<climits>
using namespace std;


int main() {
	char ch;
	cin >> ch;
	while (ch != '@') {

		if (ch >= 97 and ch <= 122) {
			ch = ch - 32;
		} else if (ch >= 65 and ch <= 90) {
			ch = ch + 32;
		}
		cin >> ch;
	}
}