#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using  namespace std;
const int N = 1e5 + 10;
vector<int>gr[N];
int count = 0;

void bfs(int scr, int n, int &ans) {
	vector<int>distance(n + 1, INT_MAX);
	queue<int>q;
	q.push(scr);
	distance[scr] = 0;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (auto nbr : gr[x]) {
			if (distance[nbr] == INT_MAX) {
				distance[nbr] = distance[x] + 1;
				q.push(nbr);
			} else if (distance[nbr] >= distance[x]) {
				//This is backedge:
				count++;
				ans = min(ans, distance[x] + distance[nbr] + 1);
			}
		}
	}
}



int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}

	int ans = n + 1;

	for (int i = 1; i <= n; i++) {
		bfs(i, n, ans);
	}

	if (ans == n + 1) {
		cout << "NO CYCLE " << endl;
	} else {
		cout << "Shortest Cycle Length is " << ans << endl;
	}

	cout << count / n << endl;
}