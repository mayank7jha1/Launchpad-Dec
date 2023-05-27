#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using  namespace std;

bool compare(pair<int, int>p1, pair<int, int>p2) {

	if (p1.second > p2.second) {
		return true;
	} else {
		return false;
	}
}


bool compare2(pair<int, int>p1, pair<int, int>p2) {

	if (p1.second > p2.second) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;
	pair<int, int>p[n];
	vector<pair<int, int>>v;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		//cin >> p[i].first >> p[i].second;
		p[i] = {x, y};
		v.push_back({x, y});
	}

	sort(p, p + n);
	sort(v.begin(), v.end());

	sort(p, p + n, compare);
	sort(v.begin(), v.end(), compare2);

	for (auto x : p) {
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for (auto x : v) {
		cout << x.first << " " << x.second << endl;
	}
}