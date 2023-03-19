#include<iostream>
#include<string>
using  namespace std;

string s;
char ch1, ch;


void Replace(int index) {
	if (index == s.length()) {
		return;
	}

	if (s[index] == ch) {
		s[index] = ch1;
	}

	Replace(index + 1);
}


int main() {
	cin >> s;
	cin >> ch >> ch1;

	Replace(0);
	cout << s << endl;
}




