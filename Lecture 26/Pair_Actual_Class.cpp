#include<iostream>
#include<utility>
#include<vector>
#include<functional>
#include<bits/stdc++.h>
using  namespace std;

bool compare(pair<string, string>p1, pair<string, string>p2) {
	if (p1.second < p2.second) {
		return true;
	} else {
		return false;
	}
}

int main() {
	//pair<int, int>p{112, 113};

	//p = make_pair(10, 20);


	//cout << p.first << " " << p.second << endl;

	int n;
	cin >> n;

	pair<string, string>p[10];

	for (int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;

		p[i].first = s;
		p[i].second = t;
	}


	//sort(p, p + n);

	// for (pair<string, string> x : p) {
	// 	cout << x.first << " " << x.second << endl;
	// }

	cout << endl;
	sort(p, p + n, compare);

	for (pair<string, string> x : p) {
		cout << x.first << " " << x.second << endl;
	}
}








