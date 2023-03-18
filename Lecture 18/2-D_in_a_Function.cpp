#include<iostream>
using  namespace std;
int g[100][100];

int Sum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
int Sum2(int *a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int Sum3(int d[][3], int col) {
	return 0;
}
int Sum4(int (*d)[3], int col) {
	return 0;
}

int Sum5(int g[100][100], int col) {
	return 0;
}


int main() {
	int n;
	cin >> n;
	int a[n];

	int b[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Sum(a, n) << endl;
	cout << Sum2(a, n) << endl;


	int c[][3] = {1, 2, 3, 4, 5, 6};

	int d[][3] = {{1, 2, 3}, {2, 3, 4}};


// {}:: Multiple Elements

	cout << Sum3(d, 3);

}







