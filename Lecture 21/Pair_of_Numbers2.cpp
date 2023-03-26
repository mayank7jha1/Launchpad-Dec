#include<iostream>
#include<climits>
using  namespace std;

int min_steps = INT_MAX;

void Function(int x, int y, int count) {

	if (x == 1 and y == 1) {
		min_steps = min(min_steps, count);
		return;
	}

	if (y - x > 0) {
		Function(x, y - x, count + 1);
	}

	if (x - y > 0) {
		Function(x - y, y, count + 1);
	}

}



void Solve(int n) {
	if (n == 1) {
		min_steps = 0;
		return;
	}

	for (int x = 1; x < n; x++) {
		// {x,n-x}
		Function(x, n - x, 1);
	}
}




int main() {
	int n;
	cin >> n;

	Solve(n);
	cout << min_steps << endl;
}




