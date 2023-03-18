#include<iostream>
#include<cstring>
using  namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	//cin >> s;
	cout << s << endl;
	string t;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			continue;
		}
		t = t + s[i];
	}
	cout << t << endl;
}





