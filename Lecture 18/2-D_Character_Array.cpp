#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	string s[10];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}


}