#include<iostream>
using  namespace std;

int main() {
	srand(time(0));

	int n = rand() % 1000;
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << rand() % 765 << " ";
	}
}