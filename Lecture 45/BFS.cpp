#include<iostream>
#include<list>
#include<map>
#include<queue>
using  namespace std;

//Adj. List
template<typename T>
class Graph {
	map<T, list<T>>l;
public:
	void addEdge(T x, T y, int undirected) {
		l[x].push_back(y);

		if (undirected == 1) {
			l[y].push_back(x);
		}

	}

	void bfs(T scr) {
		map<T, bool>visited;

		for (auto x : l) {
			visited[x.first] = false;
		}

		queue<T>q;
		q.push(scr);
		visited[scr] = 1;
		while (!q.empty()) {
			T node = q.front();
			q.pop();
			cout << node << " ";

			for (auto x : l[node]) {

				if (visited[x] == 0) {
					q.push(x);
					visited[x] = 1;
				}
			}
		}
	}

};

int main() {
	Graph<int>g;

	int n, m, undirected;
	cin >> n >> m >> undirected;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		g.addEdge(x, y, undirected);
	}

	int scr;
	cin >> scr;
	g.bfs(scr);
}








