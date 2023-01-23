#include<iostream>
#include<climits>
using namespace std;


int main() {
	int n;
	cin >> n;


	if (n == 0 or n == 1) {
		cout << n << endl;
	}

	int i = 1;
	int ans = 1;
	while (ans <= n) {
		i++;
		ans = i * i;

	}
	cout << i - 1 << endl;

}