#include<iostream>
using  namespace std;
#define int long long
const int N = 1e6 + 10;
int sum[N] = {0};
int k;
string str;

void Solve() {
	int Window = 0;
	int ans = 0;

	sum[0] = 1;

	for (int i = 0; i < str.length(); i++) {
		Window += str[i] - '0';
		if (Window >= k) {
			ans += sum[Window - k];
		}
		sum[Window]++;
	}
	cout << ans << endl;
}

int32_t main() {
	cin >> k;
	cin >> str;

	Solve();
}










