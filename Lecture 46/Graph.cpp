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
	void bfs(T scr) {
		map<T, int>distance;

		for (auto x : l) {
			distance[x.first] = INT_MAX;
		}

		queue<int>q;
		q.push(scr);
		distance[scr] = 0;

		while (!q.empty()) {
			T node = q.front();
			q.pop();
			for (int nbr : l[node]) {
				if (distance[nbr] == INT_MAX) {
					q.push(nbr);
					distance[nbr] =
					    distance[node] + 1;
				}
			}
		}
		for (auto x : l) {
			cout << "Distance of " << x.first
			     << " from " << scr << " is " <<
			     distance[x.first] << endl;
		}
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

	g.bfs(scr);
}








