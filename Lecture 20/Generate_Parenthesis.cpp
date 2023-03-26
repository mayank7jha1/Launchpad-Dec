#include<iostream>
using  namespace std;
void Solve(int n, int i, int open_count, int close_count, char* output) {

	if (i == 2 * n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}

	//Abhi aap ek box par khade ho
	if (close_count < open_count) {
		output[i] = ')';
		Solve(n, i + 1, open_count, close_count + 1, output);
	}

	if (open_count < n) {
		output[i] = '(';
		Solve(n, i + 1, open_count + 1, close_count, output);
	}

}

int main() {
	int n;
	cin >> n;
	char output[100];
	Solve(n, 0, 0, 0, output);

	//cout << output << endl;
}