#include<iostream>
#include<climits>
using namespace std;


int main() {
	char ch;
	int lower = 0, upper = 0, special = 0 ;
	while (cin >> ch) {
		//cout << ch;

		if (ch >= 97 and ch <= 123) {
			lower++;
		} else if (ch >= 65 and ch <= 91) {
			upper++;
		} else {
			special++;
		}
	}
	cout << lower << " " << upper << " " << special << endl;
}