#include<iostream>
using  namespace std;
const int N = 2e5;

int main() {
	string s;//Zero Based Indexing
	cin >> s;
	int m;
	cin >> m;
	int a[m];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
		a[i] = a[i] - 1;
	}

	//A[i]: Start Index of  the reversing part:

	//a[i] suru karke s.length()-a[i]+1 tak kaam
	//karna hain

	cout << s << endl;
	for (int i = 0; i < m; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s.length() - a[i] - 1 << " ";
	}

	int pre[s.length() + 1] = {0};

	for (int i = 0; i < m; i++) {
		int l = a[i];
		pre[l] = pre[l] + 1;

		int r = s.length() - a[i] - 1;
		pre[r + 1] = pre[r + 1] - 1;
	}


	cout << endl;
	for (int i = 0; i <= s.length(); i++) {
		cout << pre[i] << " ";
	}

	for (int i = 1; i <= s.length(); i++) {
		pre[i] = pre[i - 1] + pre[i];
	}

	cout << endl;
	for (int i = 0; i <= s.length(); i++) {
		cout << pre[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < s.length() / 2; i++) {
		if (pre[i] % 2 == 1) {
			int r = s.length() - i - 1;
			swap(s[i], s[r]);
		}
	}

	cout << s << endl;
}






