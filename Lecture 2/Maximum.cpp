#include<iostream>
#include<climits>
using namespace std;


int main() {
	int n;
	cin >> n;

	int i = 0;
	int maximum = INT_MIN;
	int x;
	while (i < n) {
		cin >> x;
		if (maximum < x) {
			maximum = x;
		}
		i = i + 1;
	}
	cout << maximum << endl;
}