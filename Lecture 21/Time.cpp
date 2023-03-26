#include<iostream>
using  namespace std;

const int N = 10000007;

int a[N] = {0};


int main() {

	for (int i = 0; i < N; i++) {
		a[i] = a[i] + 10;
	}

	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}