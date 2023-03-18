#include<iostream>
#include<algorithm>
#include<string>
using  namespace std;

bool compare(string x, string y) {
	if (x.find(y) == 0 or y.find(x) == 0) {
		if (x.length() > y.length()) {
			return true;
		} else {
			return false;
		}
	}

	if (x < y) {
		return true;
	} else {
		return false;
	}

}

int main() {
// 	string s = "AABatman";

// 	string s1 = "Bat";

// 	cout << s.find(s1) << endl;

	int n;
	cin >> n;

	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
}