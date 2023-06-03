#include<iostream>
#include<queue>
using  namespace std;

int main() {
	queue<int>q;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		q.push(x);
	}

	cout << q.front() << endl;

	cout << q.back() << endl;

	//q.pop();

	cout << q.front() << endl;
	cout << q.back() << endl;


	while (!q.empty()) {
		cout << q.front() << "  " << q.back() << endl;;
		q.pop();
	}
}












