#include<iostream>
using  namespace std;

int main() {
	char ch;
	cin.get(ch);

	while (ch != '@') {
		cout << ch;
		cin.get(ch);
	}
}