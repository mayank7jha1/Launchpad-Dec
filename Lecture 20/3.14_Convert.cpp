#include<iostream>
using  namespace std;

void Convert_Iterative(string s, string &ans) {
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == 'p' and s[i + 1] == 'i') {
			ans = ans + "3.14";
			i++;
		} else {
			ans = ans + s[i];
		}
	}
}

void Convert_Recursive(string s, string &ans, int i) {
	if (i == s.length()) {
		return;
	}
	if (s[i] == 'p' and s[i + 1] == 'i') {
		ans = ans + "3.14";
		i++;
	} else {
		ans = ans + s[i];
	}

	Convert_Recursive(s, ans, i + 1);
}


int main() {
	string s;
	cin >> s;
	string ans = "";
	string ans1 = "";
	Convert_Iterative(s, ans);
	Convert_Recursive(s, ans1, 0);
	cout << ans << endl;
	cout << ans1 << endl;
}



