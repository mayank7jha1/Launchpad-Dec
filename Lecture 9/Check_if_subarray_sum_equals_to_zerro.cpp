#include<iostream>
using  namespace std;
#include<climits>

//Q.:Check if subarray sum equals tto zero.

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int pre[n + 1] = {0};

	int sum = 0;



	pre[0] = a[0];

	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	int freq[100005] = {0};

	for (int i = 0; i < n; i++) {
		int x = pre[i];
		freq[x] = freq[x] + 1;
	}

	//Ki agar prefix arrray me koi bhi
	//do element same hain or pre array
	//me koi bhi index me 0 pada hain toh
	//haan answeer is yes.
	int flag = 0;

	for (int i = 0; i < 100005; i++) {
		if ((i == 0 and freq[i] > 0) or (freq[i] > 1)) {
			// cout << "Yes" << endl;
			// return 0;
			flag = 1;
		}
	}

	if (flag == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}














