#include<iostream>
#include<vector>
using  namespace std;

int main() {
	//Vector is a dynamic array
	//initial size 1
	//double when full.


	int n;
	cin >> n;

	int a[n] = {0}; //Static Array

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	//Dynamic Array:
	int *b = new int[n] {0};

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}

	cout << endl;

	//Vector

	// vector<int>v(n);
	vector<int>v;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
		//cin >> v[i];
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}




}

















