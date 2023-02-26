#include<iostream>
#include<cstring>
using  namespace std;

int main() {
	int x = 1221;
	int reverse = 0;
	int y = x;
	while (x > 0) {
		int digit = x % 10;
		reverse = reverse * 10 + digit;
		x = x / 10;
	}

	if (y == reverse) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	char ch[100];
	cin >> ch;

	int len = strlen(ch);
	// char ch1[100];

	// for (int i = 0; ch[i] != '\0'; i++) {
	// 	ch1[i] = ch[len - i - 1];
	// }

	// ch1[len] = '\0';
	// cout << ch1 << endl;

	// int j = len - 1;
	// int i = 0;

	// while (i < j) {
	// 	swap(ch[i], ch[j]);
	// 	i++, j--;
	// }

	// cout << ch << endl;
	int i = 0;
	int j = len - 1;
	int flag = 0;

	while (i < j) {
		if (ch[i] != ch[j]) {
			flag = 1;
		}
		i++, j--;
	}

	if (flag == 1) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}


}
















