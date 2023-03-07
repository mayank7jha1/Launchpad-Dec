#include<iostream>
using  namespace std;

int* Solve(int* a, int n) {

	a[4] = 166666;
	return a;
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6};

	int* ans = Solve(a, 6);
	cout << ans << endl;

	for (int i = 0; i < 6; i++) {
		cout << *(ans + i) << " ";
	}

	//int* aptr=a;


}