#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<queue>
using  namespace std;

template<typename T>
class Graph {
	map<int, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
	}

	void dfs_helper(T x, map<T, bool>&visited,
	                list<T>&ordering) {
		visited[x] = true;

		for (auto nbr : l[x]) {
			if (!visited[nbr]) {
				dfs_helper(nbr, visited, ordering);
			}
		}
		ordering.push_front(x);
		return;
	}

	void dfs() {
		map<T, bool>visited;
		list<T>ordering;

		for (auto x : l) {
			visited[x.first] = 0;
		}

		for (auto x : l) {
			T node = x.first;
			if (!visited[node]) {
				dfs_helper(node, visited, ordering);
			}
		}
		for (auto x : ordering) {
			cout << x << " ";
		}
		cout << endl;
	}

	void bfs() {
		map<T, int>indegree;

		for (auto x : l) {
			indegree[x.first] = 0;
		}

		//Resolving Indegree of the graph:
		for (auto x : l) {
			for (auto nbr : x.second) {
				indegree[nbr]++;
			}
		}

		//Actual BFS
		queue<int>q;
		for (auto x : indegree) {
			if (x.second == 0) {
				q.push(x.first);
			}
		}

		while (!q.empty()) {
			T node = q.front();
			cout << node << " ";
			q.pop();
			for (auto nbr : l[node]) {
				indegree[nbr]--;
				if (indegree[nbr] == 0) {
					q.push(nbr);
				}
			}
		}

	}
};


int main() {
	Graph<char>g;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		char x, y;
		cin >> x >> y;
		g.addEdge(x, y);
	}
	g.dfs();
	g.bfs();
}