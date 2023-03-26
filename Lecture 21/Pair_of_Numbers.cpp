#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
int min_steps = INT_MAX;
int n;

void Solve(int x, int y, int count) {

	if (x >= n or y >= n) {
		min_steps = min(min_steps, count);
		return;
	}


	Solve(x + y, y, count + 1);
	Solve(x, x + y, count + 1);

	return;
}

int main() {

	cin >> n;

	Solve(1, 1, 0);
	cout << min_steps << endl;
}




