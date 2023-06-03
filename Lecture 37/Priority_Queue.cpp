#include<iostream>
#include<queue>
#include<algorithm>
using  namespace std;

int main() {

	priority_queue<int>pq;//max_heap
	priority_queue<int, vector<int>, greater<int>>pq2;//min_heeap
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		pq.push(x);
		pq2.push(x);
	}


	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	while (!pq2.empty()) {
		cout << pq2.top() << " ";
		pq2.pop();
	}
	cout << endl;

	int a[] = {1, 2, 3, 4, 5};
	sort(a, a + n, greater<int>());

	for (auto x : a) {
		cout << x << " ";
	}

}












