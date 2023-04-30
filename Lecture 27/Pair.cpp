#include<iostream>
#include<vector>
#include<algorithm>
// #include<pair>
using  namespace std;

bool compare(pair<string, string>p1, pair<string, string>p2) {
	if (p1.second < p2.second) {
		return true;
	} else {
		return false;
	}
}

int main() {
	pair<string, string>p = {"Mayank", "Jha"};

	p = make_pair("Rahul", "Sharma");

	pair<string, string>p2 = {"ABC", "DEF"};
	p = p2;

	cout << p.first << " " << p.second << endl;


	int n;
	cin >> n;
	vector<pair<string, string>>v;

	for (int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;
		v.push_back({s, t});
		//v.push_back(make_pair(s, t));
	}

	// for (int i = 0; i < n; i++) {
	// 	cin >> v[i];
	// }

	// pair<string, string>

	// for (auto x : v) {
	// 	cout << x.first << " " << x.second << endl;
	// }
	// cout << endl << endl;

	// for (int i = 0; i < v.size(); i++) {
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }


	cout << v[1].first << endl;
	cout << v[1].first.length() << endl;

	sort(v.begin(), v.end(), compare);

	for (auto x : v) {
		cout << x.first << " " << x.second << endl;
	}

}






