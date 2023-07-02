#include<iostream>
#include<list>
#include<map>
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

	void Print() {
		for (auto x : l) {
			T node = x.first;
			list<T>nbr = x.second;

			cout << node << " --> ";

			for (auto ele : nbr) {
				cout << ele << " ";
			}
			cout << endl;
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

	g.Print();
}





