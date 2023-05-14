#include<iostream>
#include "hashmap1.h"
using  namespace std;

int main() {
	Hashmap<string>h;

	int n;
	cin >> n;


	for (int i = 0; i < n; i++) {
		string s; int t;
		cin >> s >> t;

		h.insert(s, t);
	}

	h.Print();
}