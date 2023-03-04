#include<iostream>
using  namespace std;

int main() {
	srand(time(0));

	int n = rand() % 1000;
	int m = rand() % 2500;

	cout << n << " " << m << endl;
}