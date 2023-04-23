#include<iostream>
#include"Vector1.h"

using  namespace std;

int main() {
	int n;
	cin >> n;
	vector1<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	for (int i = 0; i < 4; i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	vector1<string>v1;

	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		v1.push_back(x);
	}

	for (int i = 0; i < n; i++) {
		cout << v1[i] << endl;
	}


}











