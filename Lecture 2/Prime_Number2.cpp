#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 2;
	int flag = 1;

	while (i <= n - 1) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
		i = i + 1;
	}

	if (flag == 1) {
		cout << "Prime" << endl;
	} else {
		cout << "Not Prime" << endl;
	}
}