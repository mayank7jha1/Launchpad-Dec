#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>


using  namespace std;

int main() {
	//Map: Key value ka pair
	//Set: Key

	int n;
	cin >> n;

	map<string, int>m;
	unordered_map<string, int>um;

	set<string>s1;
	unordered_set<string>s2;

	for (int i = 0; i < n; i++) {
		string s;
		int x;
		cin >> s >> x;
		m.insert({s, x});
	}

	for (int i = 0; i < n; i++) {
		string s;
		int x;
		cin >> s >> x;
		um.insert({s, x});
	}

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		s1.insert(s);
	}

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		s2.insert(s);
	}


	cout << "Map: " << endl;

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}

	cout << endl << "Unordered_map" << endl;

	for (auto x : um) {
		cout << x.first << " " << x.second << endl;
	}

	cout << endl << "Set" << endl;
	for (auto x : s1) {
		cout << x << " ";
	}

	cout << endl << "Unordered_Set" << endl;
	for (auto x : s2) {
		cout << x << " ";
	}
}









