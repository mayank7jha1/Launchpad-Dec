#include<iostream>
using  namespace std;

int n, m;
bool visited[1001][1001], solution[1001][1001];

bool RatInMaze(char maze[][1001], int i, int j) {

	if (i == n and j == m) {
		solution[i][j] = 1;
		for (int x = 0; x <= n; x++) {
			for (int y = 0; y <= m; y++) {
				cout << solution[x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
		//return false;
	}

	//i,j
	if (visited[i][j] == 1) {
		return false;
	}

	visited[i][j] = 1;
	solution[i][j] = 1;

	if (j + 1 <= m and visited[i][j + 1] == 0) {
		int rightans = RatInMaze(maze, i, j + 1);
		if (rightans == 1) {
			return true;
		}
	}

	if (i + 1 <= n and visited[i + 1][j] == 0) {
		int downans = RatInMaze(maze, i + 1, j);

		if (downans == 1) {
			return true;
		}
	}

	solution[i][j] = 0;//Backtracking

	return false;
}

int main() {
	cin >> n >> m;

	char maze[1001][1001];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];

			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}

	n--, m--;

	int ans = RatInMaze(maze, 0, 0);


	if (ans == 0) {
		cout << "-1" << endl;
	}

}