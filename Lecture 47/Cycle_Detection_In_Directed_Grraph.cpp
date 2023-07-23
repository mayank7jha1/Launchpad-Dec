#include<iostream>
#include<vector>
#include<map>
#include<list>
using  namespace std;

template<typename T>
class Graph {
	map<int, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
	}

	bool dfs_helper(int x, map<int, bool>&visited,
	                map<int, bool>&stack) {
		visited[x] = true;
		stack[x] = true;

		for (auto nbr : l[x]) {
			if ((!visited[nbr] and
			        dfs_helper(nbr, visited, stack) == 1) or
			        stack[nbr] == 1) {
				return true;
			}
		}
		stack[x] = false;
		return false;
	}

	bool dfs() {
		map<int, bool>visited, stack;

		for (auto x : l) {
			visited[x.first] = 0;
			stack[x.first] = 0;
		}

		bool cycle = dfs_helper(1, visited, stack);
		return cycle;
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
	cout << g.dfs() << endl;
}