#include<iostream>
#include<algorithm>
using  namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}

		sort(s, s + n, greater<string>());

		for (int i = 0; i < n; i++) {
			cout << s[i];
		}
		cout << endl;
	}
}

