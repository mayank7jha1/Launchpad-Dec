#include<iostream>
using  namespace std;
#include<cstring>
#include<algorithm>


int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	char ch[100];
	cin >> ch;
	cout << ch << endl;

	int x = strlen(ch);
	sort(ch, ch + x);
	cout << ch << endl;

	string s;
	cin >> s;
	cout << s << endl;

	sort(s.begin(), s.end());
	cout << s << endl;
}






