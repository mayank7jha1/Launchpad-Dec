#include<iostream>
#include<climits>
using namespace std;


int main() {
	int m;
	cin >> m;
	int j = 1;
	while (j <= m) {
		int n;
		cin >> n;
		int i = 1;
		int x;
		int minimum = INT_MAX;
		int sum = 0;

		while (i <= n) {
			cin >> x;
			sum = sum + x;
			if (minimum > x) {
				minimum = x;
			}
			i = i + 1;
		}
		cout << minimum << " " << sum << endl;

		j = j + 1;
	}

}