#include<iostream>
#include<list>
#include<iterator>
using  namespace std;

void Print1(list<int>&f) {
	//auto--->integer/int
	for (auto x : f) {
		cout << x << "-->";
	}
	cout << "NULL" << endl;
}


void Print2(list<int>&f) {
	list<int>::iterator it = f.begin();
	// cout << *it << endl;

	for (auto it = f.begin(); it != f.end(); it++) {
		cout << (*it) << "-->";
	}
	cout << "NULL" << endl;
}



int main() {
	list<int>fl;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		fl.push_front(x);
	}


	Print1(fl);

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		fl.push_back(x);
	}
	Print1(fl);


	cout << fl.back() << endl;
	cout << fl.front() << endl;

	list<int>fl3 = fl;

	list<int>fl4 = {1, 12, 13, 4, 5};
	fl4.sort();
	fl4.reverse();
	fl4.pop_front();
	fl4.pop_back();
}










