#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int x;
	int  ans = 0;
	while (i <= n) {
		cin >> x;
		ans = ans ^ x;
		i = i + 1;
	}
	cout << ans << endl;
}