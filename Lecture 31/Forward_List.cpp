#include<iostream>
#include<forward_list>
#include<iterator>
using  namespace std;

void Print1(forward_list<int>&f) {
	//auto--->integer/int
	for (auto x : f) {
		cout << x << "-->";
	}
	cout << "NULL" << endl;
}


void Print2(forward_list<int>&f) {
	forward_list<int>::iterator it = f.begin();
	// cout << *it << endl;

	for (auto it = f.begin(); it != f.end(); it++) {
		cout << (*it) << "-->";
	}
	cout << "NULL" << endl;
}



int main() {
	forward_list<int>fl;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		fl.push_front(x);
	}

	Print1(fl);
	Print2(fl);

	fl.reverse();
	Print1(fl);
	fl.sort();
	Print2(fl);

	forward_list<int>fl2 = fl;
	fl2.push_front(100);
	Print1(fl2);

	fl.swap(fl2);

	Print1(fl);
	Print1(fl2);

	forward_list<int>fl3{1, 2, 3, 4, 5};
	cout << fl3.front() << endl;

	fl3.pop_front();
	Print1(fl3);
}










