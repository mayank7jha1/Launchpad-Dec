#include<iostream>
using  namespace std;

int n;
int grid[10][10];
int Total_boxes_where_knight_can_travel = 0;

int ans = -1;//Maximum number of boxes where
//knight is able to travel in a single path;
int N = 10;


int dx[] = {1, -1, 2, 2, 1, -1, -2, -2};
int dy[] = {2, 2, 1, -1, -2, -2, -1, 1};

void input_grid() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				Total_boxes_where_knight_can_travel++;
			}
		}
	}
}

//count: tells us the number of boxes i was able to visit
//in a single current path

void knight(int x, int y, int count) {

	ans = max(count, ans);
	//x,y:

	for (int i = 0; i < 8; i++) {
		int x_coordinate = x + dx[i];
		int y_coordinate = y + dy[i];

		if (x_coordinate >= 0 and x_coordinate < N and
		        grid[x_coordinate][y_coordinate] == 1 and
		        y_coordinate >= 0 and y_coordinate < N) {

			grid[x_coordinate][y_coordinate] = 0;

			knight(x_coordinate, y_coordinate, count + 1);

			grid[x_coordinate][y_coordinate] = 1;
		}
	}
}

int main() {
	cin >> n;
	input_grid();

	grid[0][0] = 0;

	knight(0, 0, 1);

	cout << Total_boxes_where_knight_can_travel - ans;
}















