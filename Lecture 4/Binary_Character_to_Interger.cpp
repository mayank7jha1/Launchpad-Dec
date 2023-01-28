//Number of character as binary

#include<iostream>
#include<climits>
using namespace std;


int main() {
	char ch;
	int value = 0;
	while (cin >> ch) {


		int x = ch - 48;//1

		value = value * 2 + x;

	}
	cout << value << endl;
}