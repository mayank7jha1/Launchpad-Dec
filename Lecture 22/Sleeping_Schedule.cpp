#include<iostream>
using  namespace std;
#define int long long
int n, h, l, r;
int a[100005];

int Sleeping_Schedule(int i, int walking_hour) {

	if (i == n) {
		return 0;
	}

	int op1_walking_hour = (walking_hour + a[i]) % h;
	int op2_walking_hour = (walking_hour + a[i] - 1) % h;

	int ans1 = 0, ans2 = 0;

	if (op1_walking_hour >= l and op1_walking_hour <= r) {
		ans1 = 1;
	}

	if (op2_walking_hour >= l and op2_walking_hour <= r) {
		ans2 = 1;
	}

	int op1 = Sleeping_Schedule(i + 1, op1_walking_hour) + ans1;
	int op2 = Sleeping_Schedule(i + 1, op2_walking_hour) + ans2;

	return max(op1, op2);
}


int32_t main() {

	cin >> n >> h >> l >> r;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Sleeping_Schedule(0, 0) << endl;
}