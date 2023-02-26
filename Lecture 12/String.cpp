#include<iostream>
using  namespace std;

void Solve(string &s) {
	s.push_back('z');
	cout << s << endl;
}

int main() {
	string s;
	cin >> s;

	cout << s << endl;
	Solve(s);
	cout << s << endl;

	cout << s[0] << " ";

	for (int i = 0; i < s.length(); i++) {
		cout << s[i] << " ";
	}
}







