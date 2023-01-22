#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int flag = 1;
	int i = 3;
	while (i <= n) {
		//i=3:
		int j = 2;
		flag = 1;
		while (j <= i - 1) {
			if (i % j == 0) {
				flag = 0;
			}
			j = j + 1;
		}

		if (flag == 1) {
			cout << i << " ";
		}
		i = i + 1;
	}

}