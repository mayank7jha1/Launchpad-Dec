#include<iostream>
#include<queue>
using  namespace std;

int main() {
	int n;
	cin >> n;
	deque<int>q;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push_back(x);
	}

	cout << q.back() << endl;
	cout << q.front() << endl;

	q.pop_back();
	q.pop_front();

	cout << q.back() << endl;
	cout << q.front() << endl;
}