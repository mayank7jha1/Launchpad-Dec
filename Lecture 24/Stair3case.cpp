#include<iostream>
#include<climits>
using  namespace std;

int min_steps = INT_MAX;

void Stair3Case(int* a, int n, int i, int count, bool* visited) {

	if (i == n) {
		min_steps = min(min_steps, count);
		return;
	}


	visited[i] = 1;

	if (i + 1 <= n and visited[i + 1] == 0) {
		Stair3Case(a, n, i + 1, count + 1, visited);
	}

	if (i + a[i] <= n and visited[i + a[i]] == 0) {
		Stair3Case(a, n, i + a[i], count + 1, visited);
	}


	visited[i] = 0;//Backtracking

}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		bool visited[100005] = {0};

		Stair3Case(a, n, 0, 0, visited);
		cout << min_steps << endl;

	}
}