#include<iostream>
using  namespace std;

int Sum(int *a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		// sum = sum + a[i];
		sum = sum + (*(a + i));
	}
	return sum;
}

int main() {



	int x = 100;

	int *xptr = &x;

	int a[] = {1, 2, 3, 4, 5};

	//	int* aptr = &a;

	int* aaptr = a;
	cout << *(aaptr + 1) << endl;
	cout << aaptr[1] << endl;



	cout << Sum(a, 5);

}









