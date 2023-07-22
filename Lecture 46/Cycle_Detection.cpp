#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<climits>
using  namespace std;

template<typename T>
class Graph {
	map<T, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}

	bool dfs_helper(T scr, map<T, bool>&visited, T parent) {
		visited[scr] = 1;

		for (auto nbr : l[scr]) {

			if (!visited[nbr]) {
				bool cycle = dfs_helper(nbr, visited, scr);
				if (cycle == 1) {
					return true;
				}
			} else  if (nbr != parent) {
				return true;
			}
		}

		return false;
	}

	bool dfs(int x) {
		map<T, bool>visited;
		for (auto x : l) {
			visited[x.first] = 0;
		}

		bool ans = dfs_helper(x, visited, -1);
		return ans;
	}
};

int main() {
	Graph<int>g;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		g.addEdge(x, y);
	}
	cout << g.dfs(0) << endl;
}








