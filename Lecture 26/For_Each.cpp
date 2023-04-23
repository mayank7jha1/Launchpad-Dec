#include<iostream>
#include<vector>
using  namespace std;

int main() {
	int n;
	cin >> n;

	// int a[10] = {2};
	// int*b = new int[10] {2,1};
	// vector<int>v(5, 6);



	int a[] = {2, 3, 1, 0, 5};
	int *b = new int[] {1, 0, 0, 0, 5, 4};
	vector<int>v{4, 3, 2, 1, 5};

	// cout << max(10, max(20, 30));
	// cout << max({10, 20, 30});

	//For every element that is inside my
	//Stucture you have to do some task.

	for (int t : a) {
		cout << t << " ";
	}
	cout << endl;

	for (auto t : v) {
		cout << t << " ";
	}

	cout << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	// //vector<int>::iterator=auto
	// for (auto it = v.begin(); it != v.end(); it = it + 1) {
	// 	cout << (*it) << " ";
	// }
}















