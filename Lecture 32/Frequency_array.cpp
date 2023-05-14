#include<iostream>
#include<map>
using  namespace std;

int main() {
	int n;
	cin >> n;

	map<int, int>m;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		m[x] = m[x] + 1;
	}

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}

}