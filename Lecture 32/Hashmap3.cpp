#include<iostream>
#include<unordered_map>
#include<map>
using  namespace std;

void Print(unordered_map<string, int>um) {

	// pair<string,int>==auto

	for (auto x : um) {
		cout << x.first << " " << x.second << endl;
	}
	cout << endl << endl;
}

void Print2(map<string, int>um) {

	map<string, int>::iterator it = um.begin();

	// auto ==== unordered_map<string, int>::iterator

	for (auto it = um.begin(); it != um.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
		//cout << it->first << " " << it->second << endl;
	}
}


int main() {
	unordered_map<string, int>um;
	map<string, int>m;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s; int t;
		cin >> s >> t;

		//um.insert(make_pair(s, t));

		um.insert({s, t});
		m.insert({s, t});
	}

	Print(um);
	Print2(m);


	string key;

	// auto it = m.begin();
	// while (it != m.end()) {
	// 	if (m.count(key) == 1) {
	// 		cout << "Yes" << endl;
	// 	}
	// 	it++;
	// }

	// cout << "No" << endl;

	if (m.count(key) == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << m["Mayank"] << endl;

	cout << m["Samyak"] << endl;


	//Find Function in Map:

	if (m.find(key) != m.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}




}





