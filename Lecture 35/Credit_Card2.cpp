#include<iostream>
using  namespace std;
#define int long long
int n, d;
int a[100005];

void Solve() {
	int BankBalance = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (BankBalance < 0) {
				BankBalance = 0;
			}
		} else {
			BankBalance += a[i];
			if (BankBalance > d) {
				cout << "-1" << endl;
				return;
			}
		}
	}

	BankBalance = 0;
	int visits = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (BankBalance < 0) {
				visits++;
				BankBalance = d;
			}
		} else {
			BankBalance += a[i];
			if (BankBalance > d) {
				BankBalance = d;
			}
		}
	}

	cout << visits << endl;
}


int32_t main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solve();
}






