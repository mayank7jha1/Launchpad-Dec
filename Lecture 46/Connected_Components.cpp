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

	void dfs_helper(T scr, map<T, bool>&visited) {
		cout << scr << " ";
		visited[scr] = 1;

		for (auto nbr : l[scr]) {
			if (!visited[nbr]) {
				dfs_helper(nbr, visited);
			}
		}
	}

	void dfs() {
		map<T, bool>visited;
		for (auto x : l) {
			visited[x.first] = 0;
		}
		int count = 0;
		for (auto x : l) {
			if (!visited[x.first]) {
				count++;
				cout << "Component Number " << count << "-->";
				dfs_helper(x.first, visited);
				cout << endl;
			}
		}
		cout << "Number of Component is " << count << endl;
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
	int scr;
	cin >> scr;

	g.dfs();
}








