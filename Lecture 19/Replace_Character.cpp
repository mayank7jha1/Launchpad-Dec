#include<iostream>
#include<string>
using  namespace std;

string s;
char ch1, ch;

// void Replace(string &s, char ch, char ch1, int index) {



// }

void Replace(int index) {
	if (index == s.length()) {
		return;
	}

	if (s[index] == ch) {
		s[index] = ch1;
	}

	Replace(index + 1);
}

// string Replace2(string s, char ch, char ch1) {

// }

int main() {
	//string s;
	cin >> s;
	//char ch, ch1;
	cin >> ch >> ch1;


	// Replace(s, ch, ch1, 0);
	Replace(0);
	cout << s << endl;

	// string ans = Replace2(s, ch, ch1);
	// cout << ans << endl;
}




