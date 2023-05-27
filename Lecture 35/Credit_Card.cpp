#include<iostream>
using  namespace std;
#define int long long
int n, d;
int a[100005];

void Solve() {
	//We are checking if we will get my answer as -1
	int BankBalance = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			//Is din aapko account balance check
			//karna hain.
			if (BankBalance < 0) {
				//I am making my bankbalance min
				//possible.
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
	//If the compiler is standing here, then
	//it means the answer should never be -1.
	//Bacause there exists an amount which
	//when added the bankbalance doesn't exceed
	//d.

	//Answer exits

	//to minimise the visits you will always
	//put the maximum amount possiblee and make
	//bank balance maximum possible i.ee d
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