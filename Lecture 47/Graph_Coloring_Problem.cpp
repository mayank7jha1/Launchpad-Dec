#include<iostream>
#include<vector>
using  namespace std;
const int N = 1e5 + 10;
vector<int>gr[N];

bool dfs_helper(int x, int parent, int*visited, int color) {

	visited[x] = color;
	for (auto nbr : gr[x]) {
		if (visited[nbr] == 0) {
			int small_ans = dfs_helper(nbr, x, visited, 3 - color);
			if (small_ans == 0) {
				return false;
			}
		} else if (nbr != parent and visited[nbr] == color) {
			return false;
		}
	}
	return true;
}

bool dfs(int n) {

	int visited[n + 1] = {0};
	int color = 1;

	int ans = dfs_helper(1, -1, visited, color);

	for (int i = 1; i <= n; i++) {
		cout << i << " - Color - " << visited[i] << endl;
	}

	return ans;
}


int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr[x].push_back(y);
		// gr[y].push_back(x);
	}

	if (dfs(n) == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}