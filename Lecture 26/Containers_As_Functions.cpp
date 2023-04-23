#include<iostream>
#include<vector>
using  namespace std;


vector<int>Solve(vector<int>a) {

	vector<int>ans(a.size());
	// vector<int>ans = a;

	ans = a;

	// for (int i = 0; i < a.size(); i++) {
	// 	ans[i] = a[i];
	// }
	return ans;
}

int main() {
	vector<int>v(5, 10);

	vector<int>x = Solve(v);

	for (auto t : x) {
		cout << t << " ";
	}
}