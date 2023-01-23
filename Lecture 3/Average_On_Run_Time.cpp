#include<iostream>
#include<climits>
using namespace std;


int main() {
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
	cout << minimum << endl;
	cout << sum / n << endl;
}