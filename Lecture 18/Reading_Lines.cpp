#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	string s[n];

	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}

}