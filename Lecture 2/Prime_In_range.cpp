#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;

	int i = 3;
	while (i <= n) {
		//i=3:
		int j = 2;
		while (j <= i - 1) {
			if (i % j == 0) {
				break;
			}
			j = j + 1;
		}
		if (j == i) {
			cout << i << " ";
		}
		i = i + 1;
	}

}